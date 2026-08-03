#include <iostream>


class Weapon{
public:
    int damage;//то что будет в нашим конструкторах
    int *level;



    Weapon(int d){
        damage = d;
        level = new int(1);// делаем так чтобы пожно было написать равно и damage сразу, для level создаем чссейку с 1 он ее запоминает т.к указатель
    };

    Weapon() : Weapon(10){}// копируем по шаблону но меняем damage на 10

    Weapon(const Weapon &other){
        damage = other.damage;
        level = new int(*other.level);// копируем в то что мы указали, damage, а для level создаем отдельную ячейку и копируем уровень из оригинала
    }
    ~Weapon(){
        delete level;// то что программа сделает при завершении
    };

};


int main(void){
    Weapon w1;
    Weapon w2 = 50;
    Weapon w3 = w2;
    Weapon w4 = w1;
}