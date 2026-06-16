#include <stdio.h>


int main(void)
{
    int g = 476789;
    int *p = (char *)&g;


    for(int i = 0; i <sizeof(int); ++i){
        printf("%u", *p);
        p++;
    }
    return 0;
}
