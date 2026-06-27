#include <stdio.h>



void multiply2 (int arr[], int size)
{
    for(int i = 0;i< size; i++){
        arr[i] = arr[i] *2;
    }
}


int main(void)
{
    int mas[] = {3,5,6};

    multiply2(mas, 3);

    printf("New mas: %d, %d, %d", mas, mas, mas);
    return 0;
}
