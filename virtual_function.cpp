#include<iostream>
using namespace std;

class Student{
    protected:
        char name[20],branch[2];
        int roll_no;
    public:
        virtual void read(){
            cout<<"Enter name: ";
            cin.get(name,20);
            cout<<"Enter branch: ";
            cin>>branch;
            cout<<"Enter roll no.: ";
            cin>>roll_no;
        }
        virtual void display(){
            cout<<name<<endl<<branch<<endl<<roll_no<<endl;
            }
        
};
class StudentCS:public Student{
    int grade[8];
    public:
    void read(){
        for(int i=0;i<8;i++){
            cout<<"Enter grade of subject "<<i+1<<": ";
            cin>>grade[i];
        }}
    void display(){
        cout<<endl<<"The grades are: ";
        for(int i=0;i<8;i++){
            cout<<"Subject "<<i+1<<": "<<grade[i]<<endl;
        }}
};
int main(){
    Student s,*bptr;
    StudentCS c;
    bptr=&s;
    bptr->read();
    bptr->display();
    
    bptr=&c;
    bptr->read();
    bptr->display();
return 0;
}