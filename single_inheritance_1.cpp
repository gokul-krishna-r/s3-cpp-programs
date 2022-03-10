#include<iostream>
using namespace std;

class Base{
    int a=10;
    public:
        int b=20;

        int getA(){
            return a;
        }
};

class Derived:public Base{
     
};

int main(){
    Derived d;
    cout<<d.b*d.getA();
    return 0;

}