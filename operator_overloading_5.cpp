#include<iostream>
#include<string>
using namespace std;

class Str{
    string str;
    public:
        void setData(){
            char c;
            int i=0;
            cout<<"Enter String: ";
            getline(cin,str);
                
        }
        Str(){

        }
        Str(string text){
            str=text;
        }
    void operator == (Str obj){
       
        if (this->str==obj.str)
            cout<<"Strings are equal"<<endl;
        else 
            cout<<"Strings are unequal"<<endl;
    }

    Str operator + (Str obj){
        Str temp;
        temp.str=this->str+obj.str;
        return temp;
        
    }
    void operator > (Str obj){
       
       if(this->str>obj.str){
           cout<<this->str<<" is greater"<<endl;
       }else if(this->str<obj.str){
           cout<<obj.str<<" is greater"<<endl;
       }else{
           cout<<"Strings are equal"<<endl;
       }
        
        
    }

    void display(){
        cout<<str<<endl;
    }


};

int main(){
    Str s1,s2,s3;
    s1.setData();
    s2.setData();
    s1==s2;
    s1>s2;
    s3=s1+s2;
    s3.display();
}