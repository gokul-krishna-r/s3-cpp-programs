#include<iostream>
using namespace std;

class complexNum{
    int x,y;
    public:
        void display(){
            cout<<x<<"+"<<y<<"i"<<endl;
        }
        complexNum(int num1,int num2){
           x=num1;
           y=num2;
        }
        complexNum operator ++(){
            //pre increment
            ++x;
            ++y;
            cout<<"Pre Increment"<<endl;
            return complexNum(x,y);
        }
        complexNum operator ++(int){
            //post increment
            x++;
            y++;
            cout<<"Post Increment"<<endl;
            return complexNum(x,y);
        }
};

int main(){
    complexNum a(2,5);
    ++a; //since value is returned it is better to assign it. eg. b=++a;
    a.display();
    a++;
    a.display();
    return 0;
}