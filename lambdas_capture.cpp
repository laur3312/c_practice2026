#include <iostream>



int main(void)
{
    int bonus = 50;

    auto addbonus = [bonus](int salary){
        return salary + bonus;
    };

    int salary = addbonus(10000);
    std::cout<<"Salary: "<< salary<<std::endl;
    return 0;
}