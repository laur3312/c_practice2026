#include <stdio.h>
#include <stdbool.h>


int main(void)
{
    double x = 7;
    int var_i = 7;

    bool res_1 = 5 > 7;          // false
    bool res_2 = x+2 >= 10.56;   // false
    bool res_3 = var_i == 7;     // true
    bool res_4 = var_i != 7;     // false
    bool res_5= x < 10;
    
    printf("Bool: %d\n",res_5);
    return 0;
}