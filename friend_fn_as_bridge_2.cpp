#include<iostream>
using namespace std;


class Current;//necessary otherwise error will occur

class Savings{
    private:
        int balance;
    public:
        friend void transferBalance(Savings,Current);
        void setBalance(){
            cout<<"Enter Savings Balance Amount: ";
            cin>>balance;
        } 
         
};

class Current{
    private:
        int balance;
    public:
        friend void transferBalance(Savings,Current);
        void setBalance(){
            cout<<"Enter Current Balance Amount: ";
            cin>>balance;
        }   
};

void transferBalance(Savings s,Current c){
    int amount;
    cout<<"Enter amount to be transferred: ";
    cin>>amount;
    if(amount < c.balance){
        c.balance-=amount;
        s.balance+=amount;
        cout<<"Current Account Balance: "<<c.balance<<endl;

    }else{
        cout<<"Not enough Balance"<<endl;
        cout<<"Current Account Balance: "<<c.balance<<endl;
        cout<<"Savings Account Balance: "<<s.balance<<endl;
    }
    
}

int main(){
    Savings s;
    Current c;
    s.setBalance();
    c.setBalance();
    transferBalance(s,c);
}