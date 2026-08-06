#include <iostream>
#include <string>

using namespace std;
class Player{
    public:
    int hp = 100;
    string name;

    void take_damage(int damage);
    void show_status();
};


void Player::take_damage(int damage){
    hp -= damage;
};

void Player::show_status(){
    cout<<"Player: "<<name<<" have a "<<hp<<" hp"<<endl;
};

int main(void){
    Player warrior;

    warrior.name = "Moses";

    warrior.take_damage(35);
    warrior.show_status();



    

    
}