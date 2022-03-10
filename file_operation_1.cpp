#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main(){

int roll_no,age;
string name;

//Read
ifstream in("results");
in>>roll_no>>age>>name;
in.close();

//Write
ofstream ot("stud.dat");
ot<<roll_no<<endl<<age<<endl<<name;
ot.close();
return 0;
}