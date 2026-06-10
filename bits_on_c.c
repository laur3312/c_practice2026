#include <stdio.h>


int main(void)
{

    unsigned char flags = 5;
    unsigned char mask = 4;

    unsigned res = flags & mask;

    
    printf("res = %d", res);
    
    return 0;
}