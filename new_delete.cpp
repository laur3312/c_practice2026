#include <iostream>

using namespace std;


int main(void){
    int *ptr = new int;
    *ptr = 42;
    cout<<"Singled number: "<<*ptr<<endl;

    delete ptr;



    int *array = new int[3];
    array[0] = 123;
    array[1] = 1311;
    array[2] = 7;

    cout<<"Array: "<<array[0]<<" "<<array[1]<<" "<<array[2]<<endl;

    delete[] array;
    return 0;
}