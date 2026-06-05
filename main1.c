#include <stdio.h>


int main_old(void)
{
    double res = 5.0/4;
    printf("Result:  %.2f\n", res);
    return 0;
}



int main(void)
{
    int a = 5;
    int b = 4;
    double res = (double)a/b;
    printf("Result: %.2f\n", res);
    return 0;
}