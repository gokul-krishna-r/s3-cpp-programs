#include<iostream>
using namespace std;


class Circle;//necessary otherwise error will occur

class Rectangle{
    private:
        int l=10,b=5;
        int area;
    public:
        friend int shadedArea(Rectangle r,Circle c);
        void calcArea(){
            area=l*b;
            
        } 
         
};

class Circle{
    private:
        int r=5;
        int area;
    public:
        friend int shadedArea(Rectangle r,Circle c);
        void calcArea(){
            area=3.14*(pow(r,2));
        }    
};




int shadedArea(Rectangle r,Circle c){
    
    return (r.area-c.area);
}



int main(){
    Rectangle r;
    Circle c;
    r.calcArea();
    c.calcArea();

    cout<<"Shaded Area: "<<shadedArea(r,c);

}