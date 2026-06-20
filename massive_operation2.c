#include <stdio.h>
#define SIZE    10


int main(void)
{
    int marks[SIZE] = {3, 2, 5};
    int idx = 2;


    for(int i = SIZE -1; i > idx; --i){
        marks[i] = marks[i-1];
    }

    marks[idx] = 4;

    for(int i = 0; i < SIZE; ++i){
        printf("%d ", marks[i]);
    }
    return 0;
}


