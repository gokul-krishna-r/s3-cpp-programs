#include <iostream>
using namespace std;


int volume(int); //cube
float volume(float,float,float); //cuboid
float volume(float,float); //cylinder
double  volume(double); //sphere
int main(){

float result;
cout<<"Cube "<<volume(1)<<endl;
cout<<"Cuboid "<<volume(5.0,2.0,10.0)<<endl;
cout<<"Sphere "<<volume(1.0)<<endl;
cout<<"Cylinder "<<volume(5.0,10.0)<<endl;

return 0;
}


int volume(int side){
    return side*side*side;
}

float volume(float length,float width,float height){
    return length*width*height;
}

float volume(float radius,float height){
    return 3.14*radius*radius*height;
}

double volume(double radius){
    return 3.14*radius*radius*radius*(1.333);
}