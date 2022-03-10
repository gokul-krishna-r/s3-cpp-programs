/*
Gokul Krishna R
Reg No. 20220040
*/
#include<iostream>
#include<math.h>
#include<string>
using namespace std;

class Shape{
    protected:
        float side[100],area,perimeter;
    public:
       

        void getData(int n){
            for(int i=0;i<n;i++){
                cout<<"Enter side "<<i+1<<" value: ";
                cin>>side[i];
            }
        }
        virtual void Area()=0;

        void display(string shape_name){
            cout<<endl<<"Area of "<<shape_name<<" is : "<<area<<endl;

        }
};

class Triangle:public Shape{
    float s=0;
    public:
        Triangle(){
            getData(3);
        }
        bool validate(){
             if((side[0]+side[1])<=side[2]||(side[1]+side[2])<=side[0]||(side[2]+side[0])<=side[1]){
                return false;
            }else{
                return true;
            }
        }
        void Area(){
                s=(side[0]+side[1]+side[2])/2;
                area=sqrt(s*(s-side[0])*(s-side[1])*(s-side[2]));    
        }
        
};
class Rectangle:public Shape{
    public:
        Rectangle(){
            getData(2);
        }
        void Area(){
            
            area=side[0]*side[1];
        }
     
};
class Circle:public Shape{
    public:
        Circle(){ 
            getData(1);
        }
        void Area(){
            area=side[0]*side[0]*3.14;
        }
       
};

int main(){
    Shape *sh;
    cout<<endl<<"Triangle"<<endl;
    Triangle t;
    sh=&t;
    if(t.validate()){
        sh->Area();
        sh->display("Triangle");
    }else{
        cout<<"Triangle is not valid";
    }

    cout<<endl<<"Rectangle"<<endl;
    Rectangle r;
    sh=&r;
    sh->Area();
    sh->display("Rectangle");

    cout<<endl<<"Circle"<<endl;
    Circle c;
    sh=&c;
    sh->Area();
    sh->display("Circle");

    return 0;
}

