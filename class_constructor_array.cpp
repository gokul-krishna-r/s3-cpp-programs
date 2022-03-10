#include<iostream>
using namespace std;


class insertArray{
    private:
        int array[20];
        int n;
    public:


        insertArray(){
            cout<<"Enter no of elements of array: ";
            cin>>n;
            for(int i=0;i<n;i++){
                cin>>array[i];
            }
        }
        insertArray(int a,int b){
            cout<<"Enter no of elements of array: ";
            cin>>n;
            n=a;
           

            for(int i=0;i<n;i++){
                cin>>array[i];
            }
        }

        void sortArray(){
            int temp;
            for(int i=0;i<n;i++){
                for(int j=0;j<n-i-1;j++){
                    if(array[j]>array[j+1]){
                        temp=array[j];
                        array[j]=array[j+1];
                        array[j+1]=temp;
                    }
                }
            }
        }


        void range(){
            sortArray();
            cout<<"Range is "<<array[n-1]-array[0]<<endl;;
        }

        void median(){

            if(n%2==0){
                int mid=(array[(n-1)/2]+array[(n)/2])/2;
                cout<<"Median is "<<mid;
            }else{
                cout<<"Median is "<<array[(n-1)/2];
            }
        }


};


int main(){
    insertArray a;
    a.range();
    a.median();



    return 0;
}