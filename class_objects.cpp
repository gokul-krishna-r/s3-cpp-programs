#include <iostream>
#include <cmath>
using namespace std;

class rectangle{
    private:
       float length,breadth,area;
    public:
        void setValues(float l,float b){
            length=l;
            breadth=b;
        }
        float calcArea(){
            area=length*breadth;

            return area;
        }
};


float radius_for_eq_area(rectangle r){
    float area = r.calcArea();
    float radius=sqrt((area/3.14));
    return radius;
}

int main(){
    rectangle r1;
    r1.setValues(1.0,1.0);
    cout<<"Radius of the circle is "<<radius_for_eq_area(r1);

}
// class time{
//     private:
//         int m,h;
//     public:
//         void setTime(int hour,int min){
//             m=min;
//             h=hour;
//         }
//         int sum(time t1,time t2){
//             time t3;
//             t3.m=m=t1.m+t2.m;
//             t3.h=t3.m/60;
//             t3.m%=60;

//             t3.h=t3.h+t1.h+t2.h;
//         return ;
//         }
// };

// int main(){

//     time t1,t2,t3;
//     t1.setTime(2,35);
//     t2.setTime(3,40);

//     cout<<t3.sum(t1,t2);



//     return 0;
// }