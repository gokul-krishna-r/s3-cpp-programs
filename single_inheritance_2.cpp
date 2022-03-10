#include<iostream>
using namespace std;

/*
class Circle{
    protected: int radius;float area;
    public:
        void calcArea(){
            area=3.14*radius*radius;
        }
};

class Cylinder:public Circle{
    float volume;
    int height=10;
    public:
        float calcVolume(){
            radius=1;
            calcArea();
            volume=area*height;
        }
        void display(){
            cout<<volume;
        }

};
*/

//Using parameterised constructors
class Circle{
    protected: int radius;float area;
    public:
        Circle(int r){
            radius=r;
        }
        void calcArea(){
            area=3.14*radius*radius;
        }
};

class Cylinder:public Circle{
    float volume;
    int height;
    public:
        Cylinder(int h,int r):Circle(r){
            height=h;
        }
        float calcVolume(){
            calcArea();
            volume=area*height;
        }
        void display(){
            cout<<volume;
        }

};

int main(){
    Cylinder c(10,1);
    c.calcVolume();
    c.display();
    return 0;

}

