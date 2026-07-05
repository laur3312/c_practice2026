#include <stdio.h>


struct Boss{
    int id;
    int hp;
};

void tage_damage(struct Boss *b, int damage){
    b->hp-= damage;
};

void health(struct Boss *b, int amount){
    b->hp += amount;
};



int main(void)
{
    struct Boss dragon = {3111, 100};

    struct Boss *ptr = &dragon;
    tage_damage(&dragon, 50);
    health(&dragon , 25);

    printf("Dragon Hp: %d", ptr->hp);
    return 0;

}