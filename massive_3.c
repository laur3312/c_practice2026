#include <stdio.h>




int main(void)
{
    int matrix[2][3] = {
        {10, 20, 30},
        {40, 50, 60}
    };


    int(*p)[3] =  matrix;


    printf("%d", *(*(p +1)+ 1));
    return 0;
}