#include <stdio.h>


int main(void)
{
    int numbers[] = {5, 10, 15, 20, 25};

    int weight = sizeof(numbers) / sizeof(numbers[0]);


    for(int i = 0; i< weight; ++i){
        printf("Элемент %d = %d\n", i, numbers[i]);
    }
    return 0;
}