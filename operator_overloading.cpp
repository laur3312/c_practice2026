#include <iostream>

using namespace std;


class Hero{
public:
    int gold;
    int wood;


    Hero(int g, int w){
        gold = g;
        wood = w;
    }


    Hero operator+(Hero other){
        Hero result(this->gold + other.gold, this->wood + other.wood);
        return result;
    }
};


int main(void)
{
    Hero h1(150, 250);
    Hero h2(200, 250);
    Hero totalh = h1 + h2;

    cout<<"Total Gold: "<<totalh.gold<<endl;
    cout<<"Total Wood: "<<totalh.wood<<endl;
    return 0;
}