
#include <iostream>
#include <string>
using namespace std;


class dateClass{
    private:
        int day,mn,year;
        string month,date;
    public:
        void readInput(){
            cout<<"Enter DD/MM/YYYY: ";
            cin>>day>>mn>>year;
        }

        void displayOutput(){
            changeMonth();
            cout<<"The Date is "<<day<<" "<<month<<" "<<year;
        }
        void changeMonth(){
            switch(mn){
                case 1:
                    month="Jan";
                    break;
                case 2:
                    month="Feb";
                    break;
                case 3:
                    month="Mar";
                    break;
                case 4:
                    month="Apr";
                    break;
                case 5:
                    month="May";
                    break;
                case 6:
                    month="Jun";
                    break;
                case 7:
                    month="July";
                    break;
                case 8:
                    month="Aug";
                    break;
                case 9:
                    month="Sept";
                    break;
                case 10:
                    month="Oct";
                    break;
                case 11:
                    month="Nov";
                    break;
                case 12:
                    month="Dec";
                    break;
                default:
                    cout<<"Invalid";
                    break;
                
            }
        }
      
};

int main()
{
    int choice;
    dateClass obj;

    obj.readInput();
    obj.displayOutput();
    
    return 0;
}

