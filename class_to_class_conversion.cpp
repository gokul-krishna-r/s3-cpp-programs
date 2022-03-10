#include<iostream>
using namespace std;

class Dollars{
    float value;
    public:
        Dollars(float b){
            value=b;
        }
        float getValue(){
            return value;
        }
        void Display(){
            cout<<value<<" Dollars"<<endl;
        }
};
class Cents{
    float value;
    public:

        Cents(){
            value=0;
        }
         Cents(Dollars d){
           value=d.getValue()*100; 
        }

        float getValue(){
            return value;
        }
        void Display(){
            cout<<value<<" Cents"<<endl;
        }
    };
int main(){
    Dollars d(10.00);
    d.Display();
    Cents c;
    c=d;
    c.Display();
    return 0;
}