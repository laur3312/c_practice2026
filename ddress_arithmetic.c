#include <stdio.h>

int main(void)
{
    int g =4;
    int *ptr = &g;


    printf("ptr = %u\n", ptr);
    ptr++;
    printf("ptr = %u\n", ptr);
    return 0;
}