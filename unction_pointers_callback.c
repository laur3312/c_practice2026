#include <stdio.h>


void heal(int *hp)
{
    *hp = *hp + 10;
}


void poison(int *hp)
{
    *hp = *hp -20;

}


void drink_potion(int *player_hp, void(*recept)(int*)){
    recept(player_hp);
}


int main(void)
{
    int my_hp = 200;

    drink_potion(&my_hp, heal);
    printf("My hp: %d\n", my_hp);

    drink_potion(&my_hp, poison);
    printf("My hp: %d\n", my_hp);
    return 0;

}

