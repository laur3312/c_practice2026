#include <stdio.h>


int main(void)
{
    int digit;
    scanf("%d", &digit);
    
    int range = 10; // Делитель, чтобы получить последнюю цифру числа
    int res = digit % range;
    printf("Result: %d\n", res);
    return 0;
}