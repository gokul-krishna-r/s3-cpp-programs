#include<iostream>
using namespace std;

int main(){
    float a,b,c;
    cout<<"Enter sides of the triangle: ";
    cin>>a>>b>>c;
    try{
        if(a==0||b==0||c==0){
            throw 1;
        }
        else if(a+b<c||c+b<a||a+c<b){
            throw 2;
        }else{
            //eq to calc area of triangle
        }
    }catch(int x){
        if(x==1){
            cout<<"0 not allowed";
        }else if(x==2){
            cout<<"not valid";
        }  
    }
    return 0;
}