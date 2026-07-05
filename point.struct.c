#include <stdio.h>

struct Player {
    char name[20];
    int level;
    int hp;
};

void takeDamage(struct Player *p) {
    p->hp -= 20;    
}

int main(void) {
    struct Player character1 = {"Ivan", 20, 100};

    takeDamage(&character1);

    printf("Hp: %d\n", character1.hp);

    return 0;
}