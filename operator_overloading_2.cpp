#include<iostream>
using namespace std;

class ArrayClass{

    int a[20];
    int n;

    public:
        ArrayClass(int size){
            n=size;
            cout<<"Enter the elements of the array";
            for(int i=0;i<n;i++){
                cin>>a[i];
            }
        }

        ArrayClass operator -(){
            for(int i=0;i<n;i++){
                a[i]=a[i]*-1;
            }
        }
        void display(){
             for(int i=0;i<n;i++){
                cout<<a[i]<<", ";
            }
        }
};
int main(){
    ArrayClass a(5);
    -a;
    a.display();

    return 0;
}