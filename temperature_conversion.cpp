
#include <iostream>
using namespace std;


class temperature{
    private:
        float celc,fahren;
    public:
        void readInput(){
            cout<<"Enter Temperature in Celcius : ";
            cin>>celc;
        }
        void convert(){
            fahren=celc*1.8+32;
        }

        void displayOutput(){
            cout<<"The converted temperature is "<<fahren;
        }
       
};

int main()
{
    
    temperature obj;

    obj.readInput();
    obj.convert();
    obj.displayOutput();
    
    return 0;
}

