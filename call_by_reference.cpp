#include<iostream>
using namespace std;

int& large(int&,int&);
void f1(int,int);
void f2(int&,int&);
void sum(int a,int b,int&c);
int i;

int main(){
    int l,k;
    int j=60;
    i=50;
    int x=2,y=3;
    sum(x,y,y);
    cout<<x<<" "<<y<<endl;
    f1(i,j);
    cout<<i<<" "<<j<<endl;

    f2(i,j);
    cout<<i<<" "<<j<<endl;
    cout<<"Enter the values of l and k : ";
    cin>>l>>k;
    large(l,k)=120;
    cout<<"L="<<l<<" k="<<k;


    return 0;
}


void f1(int x,int y){
    i=100;
    x=10;
    y=x+i;
}

void f2(int& p,int& q){
    i=100;
    p=10;
    q=p+i;
}

void sum(int a,int b,int&c){
    a=b+c;
    b=a+c;
    c=a+b;
}
int& large(int& p,int& q){
    if(p>q){
        return p;
    }else{
        return q;
    }
}