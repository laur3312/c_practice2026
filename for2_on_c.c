#include <stdio.h>


int main(void)
{
    int n = 5;
    int p = 1;
    int i = 1;  


    for(; i<= 5; i++)
    p = p * i;

    printf("p = %d", p);

    return 0;
}
