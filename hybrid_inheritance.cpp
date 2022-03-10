#include<iostream>
using namespace std;

class Player{
    protected:
        int age;
        char gender;
        char name[20];
};

class Physique: public Player{
    protected:
        int height,weight;
        
};
class Location{
    protected:
        int pin;
        char city[20];
};
class Game:public Location,Physique{
    protected:
        char game_name[20];
};




int main(){


    return 0;
}