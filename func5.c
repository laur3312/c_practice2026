#include <stdio.h>



void multiply2(int arr[], int size)
{
    for(int i = 0;i < size; i++){
        arr[i] = arr[i] * 2;
    }
}


int main(void)
{
    int mas[] = {25, 12, 31, 56, 45, 34};

    multiply2(mas, 6);

    printf("New mas: %d, %d, %d, %d, %d, %d", mas[0], mas[1], mas[2], mas[3], mas[4], mas[5]);
    return 0;
}