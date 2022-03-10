#include<iostream>
using namespace std;

class Vector{
    int x,y,z;

    public:
        Vector(int x,int y,int z){
            this->x=x;
            this->y=y;
            this->z=z;
        }
        Vector(){
            x=0;
            y=0;
            z=0;
        }

        Vector operator +(Vector b){
            Vector result;
            result.x=this->x+b.x;
            result.y=this->y+b.y;
            result.z=this->z+b.z;
            return result;
        }

        void display(){
            cout<<"The vector coordinates are: "<<x<<"i + "<<y<<"j + "<<z<<"k";
        }
};

int main(){
    Vector v1(3,4,5),v2(6,7,8),v3;
    v3=v1+v2;
    v3.display();
    return 0;
}