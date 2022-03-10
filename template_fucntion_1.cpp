#include<iostream>
using namespace std;

template<class T>
void Swap(T &x,T &y){
    T temp;
    temp =x;
    x=y;
    y=temp;
}

int main(){
    int a=10,b=20;
    char c='c';
    char d='d';
    Swap<int>(a,b);
    Swap<char>(c,d);
    cout<<"a="<<a;
    cout<<"b="<<b;
    cout<<"c="<<c;
    cout<<"d="<<d;
 
    return 0;
}