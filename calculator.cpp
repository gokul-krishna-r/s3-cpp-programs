
#include <iostream>
using namespace std;

int main()
{
    int choice;
    float num1,num2;
    
    cout<<"Enter Two Number : ";
    cin>>num1>>num2;
    
    cout<<"Choose Operator\n1.Addition\n2.Subtraction\n3.Division\n4.Multiplication"<<endl;
    cout<<"Choice : ";
    cin>>choice;
    
    switch(choice) {
        case 1:
            cout<<num1<<"+"<<num2 << "= "<<num1+num2;
            break;

        case 2:
            cout<<num1<<"-"<<num2<<"= "<<num1-num2;
            break;

        case 3:
            cout<<num1<<"/"<<num2<<"= "<<num1/num2;
            break;

        case 4:
            cout<<num1<<"*"<<num2<< "= "<<num1*num2;
            break;

        default:
            cout << "Some error occured";
            break;
    }
    
    return 0;
}
