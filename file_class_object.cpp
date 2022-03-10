#include<iostream>
#include<fstream>
using namespace std;

class record{
    
    public:
        int a;
        void display(){
            cout<<a<<endl;
        }
        void setA(int b){
            a=b;
        }

};

int main(){
    ofstream out;
    record b[3],d[3];
    record r;
    int p;

    out.open("text_4.txt");
    for(int i=0;i<3;i++){
        b[i].setA(i);
        out.write((char*)&b[i],sizeof(b[i]));
    }
    out.close();
    ifstream in;
    in.open("text_4.txt");
    
    for(int i=0;i<3;i++){
        in.read((char*)&d[i],sizeof(d[i]));
        cout<<d[i].a<<endl;

    }
    //Selecting third record(random access)
    p =( 3 -1)*sizeof(b[0]);
    in.seekg(p,ios::beg);
    in.read((char*)&r,sizeof(r));
    r.display();
    in.close();
    return 0;
}