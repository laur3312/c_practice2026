#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    
    
    srand(time(NULL));
    int range = 10;

    int rand1 = rand() % range;
    int rand2 = rand() % range - 5;

    printf("%d, %d, %d, %d, %d\n",rand1, rand2, rand(), rand(), rand());
    return 0;
}