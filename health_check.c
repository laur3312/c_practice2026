#include <stdio.h>



void check_hp(int hp)
{
    if(hp <= 0){
        printf("You die\n");
    }
    else{
        printf("You alive!\n");
    }
}


int main(void)
{
    int hp = 20;
    check_hp(hp);
    return 0;

    
}