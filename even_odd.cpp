#include <iostream>
using namespace std;

int main()
{
    int n;
    int num,even=0,odd=0;
    
    cout<<"Enter number of elements : ";
    cin>>n;
    
    cout<<"Enter elements : ";
    for (int i = 0; i < n; i++)
    {
        cin>>num;
        if(num%2==0){
            even+=num;
        }else{
            odd+=num;
        }
    }
    
    cout<<"The sum of even numbers is"<<even<<endl;
    cout<<"The sum of odd numbers is"<<odd<<endl;

    return 0;
}
