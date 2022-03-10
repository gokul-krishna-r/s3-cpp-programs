
#include <iostream>
using namespace std;
class calculator{
    private:
        float num1,num2,result;
     
    public:
        void readInput(){
            cout<<"Enter Two Number : ";
            cin>>num1>>num2;
        }

        void displayOutput(){
            cout<<"The result is "<<result;
        }
        void add(){
            result=num1+num2;
        }
        void sub(){
            result=num1-num2;
        }
        void multiply(){
            result=num1*num2;
        }
         void division(){
            result=num1/num2;
        }
};

int main()
{
    int choice;
    
    calculator obj;
  
    obj.readInput();

    cout<<"Choose Operator\n1.Addition\n2.Subtraction\n3.Division\n4.Multiplication"<<endl;
    cout<<"Choice : ";
    cin>>choice;
    
    switch(choice) {
        case 1:
            obj.add();
            break;

        case 2:
            obj.sub();
            break;

        case 3:
            obj.division();
            break;

        case 4:
            obj.multiply();
            break;

        default:
            cout << "Some error occured";
            break;
    }


    obj.displayOutput();
    
    return 0;
}

