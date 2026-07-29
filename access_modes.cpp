#include <string>
#include <iostream>



using namespace std;



struct Player{
    public:
    string name = "Mazeh";

    private:
    int gold = 250;


    public:
    int get_gold(){
        return gold;
    }

    void set_gold(int val){
        if(val>= 0){
            gold = val;
            cout<<"Character gold is change for "<<val<<endl;
        }
    }

    void add_gold(int cost){
        if(cost >= 0){
            gold+= cost;
            cout<<"Character gold has been added for "<<cost<<endl;
        }
    }


};


int main(void)
{
    Player hero;

    hero.set_gold(300);

    hero.get_gold();

    hero.add_gold(250);
    hero.get_gold();

    cout<<hero.name <<" have a "<<hero.get_gold()<<" gold"<<endl;

    return 0;

}