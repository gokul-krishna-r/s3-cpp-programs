#include <iostream>
using namespace std;

class student{
    private:
        static int max_mark,pass_mark;
    public:
        static bool checkMark(){
            int mark;
            cout<<"Enter Mark: ";
            cin>>mark;
            if(mark>pass_mark){
                return true;
            }else{
                return false;
            }
        }
        void printResult()const{
            if(checkMark()){
                cout<<"The student passed"<<endl;
            }else{
                cout<<"The student failed"<<endl;
            }
        }
};

int student::max_mark=100;
int student::pass_mark=40;

int main(){
    student s[20];
    for(int i=0;i<20;i++){
        s[i].printResult();
    }
    return 0;
}