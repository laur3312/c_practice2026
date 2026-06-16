#include <stdio.h>


int main(void)
{
    int x =5;
    int *p;

    p = &x;

    *p = 1000;

    printf("%d\n", *p);
    return 0;
}
