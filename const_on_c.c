#include <stdio.h>



int main(void)
{
    const short ar[] = {4, 3, 2, 1, 5, 6, 7};
    const short *ptr_ar;


    ptr_ar = ar;
    short x = ptr_ar[1];

    return 0;
}