#define SQUARE(v) v*v;
#include<iostream>
using namespace std;

inline float square(float j){
    return j*j;
}

int main(){
    int p=3,q=3,r,s;

    r=square(++p);
    s=SQUARE(q++);
     cout<<r<<" "<<s;
return 0;
}