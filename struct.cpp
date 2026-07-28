#include <iostream>
#include <string>

using namespace std;


struct Player{
    string name;
    int level;
    int gold;



    void buy_item(int cost){
        gold-= cost;
        cout<<name<<" buy item for "<<cost<<"\n"<<"Gold:"<<gold;

    };
    
};


int main(void){
    Player hero{"Mazeh", 150, 1255};


    hero.buy_item(45);

}