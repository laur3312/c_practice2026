#include <iostream> //library
#include <string>
#include <memory>


using namespace std;


class Weapon{
    public:
    string name = "Based sword";//based name


    Weapon(){
        cout<<"Sword spawned"<<endl;//то что выведет при запуске программы а точнее при создании меча
    };

    ~Weapon(){
        cout<<"Sword deleted"<<endl;//то что выведет при окончании программы
    };


};

int main(void){
    unique_ptr<Weapon> My_sword = make_unique<Weapon>();//Умный указатель будет слиедитть за классом weapon, следом мы выделяем память под Weapon

    My_sword->name = "Frozen sword";//Создаем имя нашему мечу

    cout<<"Character sword: "<<My_sword->name<<endl;//Меч нашего персонажа
    return 0;
}