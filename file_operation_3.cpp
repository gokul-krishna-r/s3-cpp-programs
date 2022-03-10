#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main(){

char c;
ofstream ot1;
ifstream in1;
int count=0;

ot1.open("text_file");
cin.get(c);
 while(c !='\n'){
     cin.get(c);
     ot1<<c;
 }

ot1.close();


in1.open("text_file");
while(in1.eof()==0){
    in1>>c;
    
    if(c>=48 &&c<=57){
        count++;
    }
}
in1.close();
cout<<count;

return 0;
}