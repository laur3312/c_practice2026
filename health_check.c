#include <stdio.h>



void check_status( int hp)
{
    if(hp<= 0){
        printf("You die!\n");
        return;
    }


    printf("Hp: %d. You alive!\n", hp);
    check_status(hp - 5);
}


int main(void)
{
    int hp = 100;
    check_status(hp);
    return 0;
}
