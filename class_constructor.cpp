#include<iostream>
using namespace std;

class Triangle{
    private:
        int height,base;
    public:
        Triangle(){
            height=10;
            base=5;
        }
         Triangle(int g,int h=10){
            height=g;
            base=h;
        }
        Triangle(int x,int y){
            height=x;
            base=y;
        }

       


        void calcArea(){
            cout<<"Area is "<<0.5*base*height;
        }
};

int main(){

    Triangle t;
    t.calcArea();
    Triangle t2(10,50);
    t2.calcArea();
    Triangle t3(56);
    t3.calcArea();


    return 0;
}