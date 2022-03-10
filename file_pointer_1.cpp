#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main(){

int length=0;
ifstream in;
char c;
in.open("text_file");
in.seekg(0,ios::end);
length=in.tellg();
cout<<length;
for(int i=1;i<=length;i++){
    in.seekg(-i,ios::end);
    in.get(c);
    cout<<c;
}
return 0;
}