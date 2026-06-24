#include <stdio.h>



int sum(int x, int y)
{
    return 2*(x+y);
}



int main(void)
{
    int x, y;
    int res;
    printf("Введите число в x: ");
    scanf("%d", &x);
    printf("Введите число в y: ");
    scanf("%d", &y);

    res = sum(x, y);
    printf("%d", res);
    return 0;
}