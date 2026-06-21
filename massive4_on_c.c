#include <stdio.h>




int main(void)
{
    char bf[10];


    fgets(bf, sizeof(bf), stdin);
    puts(bf);
    return 0;
}