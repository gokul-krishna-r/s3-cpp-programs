#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main(){

int day[3],day2[3];
string month[3],month2[3];
ofstream ot1,ot2;

ot1.open("month");
for(int i=0;i<3;i++){
    cout<<"Enter month "<<i+1<<": ";
    cin>>month[i];
    ot1<<month[i]<<endl;
}

ot2.open("day");
for(int i=0;i<3;i++){
    cout<<"Enter day "<<i+1<<": ";
    cin>>day[i];
    ot2<<day[i]<<endl;
}
ot1.close();
ot2.close();

ifstream in1,in2;
in1.open("month");
in2.open("day");

for(int i=0;i<3;i++){
    in1>>month2[i];
    in1>>day2[i];
    cout<<month2[i]<<" "<<day2[i]<<endl;
}
in1.close();
in2.close();

return 0;
}