#include<iostream>
using namespace std;

class Item{
    protected: 
        int item_no;
        char name[20];
        float price;

              
};

class DiscountedItem: public Item{
    int discounted_percent;
    float discounted_price;
    public:
    
    float getPrice(){
        return price;
    }
    float getDiscountPrice(){
        return discounted_price;
    }
    void setData()
        {
                cout<<"\n Enter Item Name : ";
                cin>>name;
                cout<<"\n Enter Item No. : ";
                cin>>item_no;
                cout<<"\n Enter Item Price : ";
                cin>>price;
                cout<<"\n Enter Discount Percent : ";
                cin>>discounted_percent;
                cout<<"\n ----------------------\n";
                discounted_price = price - price * discounted_percent / 100;
        }


    void display(){
         cout<<"\n Item Name : "<<name;
                cout<<"\n Item No. : "<<item_no;
                cout<<"\n Item Price : "<<price;
                cout<<"\n Discount Percent : "<<discounted_percent;
                cout<<"\n Discounted Price : "<<discounted_price;
                cout<<"\n ----------------------";
    }
    
};

int main(){
    int count;
    float totalPrice=0,discount=0;
    DiscountedItem dt[100];
    cout<<"\nEnter number of items : ";
    cin>>count;

    for(int i=0;i<count; i++)
        {
            dt[i].setData();
    }
    for(int i=0;i<count;i++)
        {
            totalPrice = totalPrice + dt[i].getPrice();
            discount = discount +dt[i].getDiscountPrice();

            dt[i].display();
    }
    cout<<"\nTotal Price: "<<totalPrice<<"  Discounted Price: "<<discount;

    return 0;
}