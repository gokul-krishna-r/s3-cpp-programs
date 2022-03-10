#include <iostream>
using namespace std;


int sum(int a[],int n);
int sum(int a[],int n,char ch);
int sum(int a[],int m,int n,int length);
int main(){

int a[]={1,2,3,4,5,6,7,8,9};
int n=sizeof(a)/sizeof(a[0]);
cout<<"Sum: "<<sum(a,n)<<endl;
cout<<"Sum(Even or Odd): "<<sum(a,n,'E')<<endl;
sum(a,3,5,n);
return 0;
}


int sum(int a[],int n){
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=a[i];
    }
    return sum;
}


int sum(int a[],int n,char ch){
    int sum=0;
    switch(ch){
        case 'E':{
            for(int i=0;i<n;i++){
                if(a[i]%2==0){
                    sum+=a[i];
                }
            }
            break;
        }
        case 'O':{
            for(int i=0;i<n;i++){
                if(a[i]%2!=0){
                    sum+=a[i];
                }
            }
            break;
        }
        default:
            cout<<"Not valid";
            break;
    }
    
    return sum;
}

int sum(int a[],int m,int n,int length){
    
int temp;
temp=a[m];
a[m]=a[n];
a[n]=temp;
for(int i=0;i<length;i++){
    cout<<a[i]<<" ";
}


return 0;

   
}
