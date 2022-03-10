#include<iostream>
using namespace std;

class B;
class A{
    int x;
    public:
        A(int n){
            x=n;
        }
       friend void InterchangeValue(A ,B);
};

class B{
    int y;
    public:
        B(int n){
            y=n;
        }
        friend void InterchangeValue(A ,B );
};

void InterchangeValue(A a,B b){
    int temp=a.x;
    a.x=b.y;
    b.y=temp;
    cout<<"x="<<a.x<<endl;
    cout<<"y="<<b.y;
}
int main(){
    A aobj(4);
    B bobj(5);
    InterchangeValue(aobj,bobj);
    return 0;
}