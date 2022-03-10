#include<iostream>
using namespace std;

int main(){

    int num,temp=0,rev_num=0,digit;

    cout << "Enter Digit to be Reversed : ";
    cin >> num;

    temp=num;
    while(temp>0){
        digit = temp%10;
        rev_num = rev_num*10+digit;
        temp /=10;
    }

    cout << "The reversed Digit is : " << rev_num;


    return 0;
}