#include<iostream>
#include<cmath>
using namespace std;

class complexNum{
    float x,y;
    public:
        void display(){
            cout<<x<<"+"<<y<<"i"<<endl;
        }
        complexNum(float num1,float num2){
           x=num1;
           y=num2;
        }
        operator float(){ 
            return sqrt(pow(x,2)+pow(y,2));
        }    
};
int main(){
    float t;
    complexNum a(2,5);
    a.display();
    t=a;
    cout<<"The magnitude of the complex number is "<<t;
    return 0;
}