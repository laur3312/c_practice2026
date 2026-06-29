#include <stdio.h>
#include <stdarg.h>


int sum(int count, ...)
{
    int total = 0; // total number

    va_list robot; //create robot
    va_start(robot, count); // start robot 

    for(int i = 0; i< count; i++){
        total += va_arg(robot, int); // edit total
    }
    va_end(robot);
    return total;
}



int main(void)
{
    int total = sum(5, 56, 25, 84, 25, 50);// test
    printf("Total: %d\n", total);
    return 0;
}