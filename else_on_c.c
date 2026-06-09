#include <stdio.h>




int main(void)
{
    int x;
    if (scanf("%d", &x) != 1) {
        printf("Error: INPUT ERROR");
        return 0;
    }


    if (x > 0)
    printf("x > 0\n");
    else
    printf("x < 0\n");
    return 0;
}