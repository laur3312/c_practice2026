#include <stdio.h>





int main(void)
{
    float func_1[100] = {2.4, -3.8, 0, 10.2, 11.78, -5.43};
    float func_2[50];

    for(int i= 0; i < 50; ++i){
        func_2[i] = func_1[i];
    }

    for(int i = 0; i < 50; ++i){
        printf("%.2f",func_2[i]);
    }
    return 0;
}