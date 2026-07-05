#include <stdio.h>


struct Point{
    int x;
    int y;
};


struct Player{
    char name[20];
    int level;
    struct Point pos;
};



int main(void)
{
    struct Player character1 = {"Alex", 50, {368, 3000}};


    character1.pos.x = 383;
    character1.pos.y = 3015;
 
    


    printf("Character: %s(level: %d)\nPosition: x = %d, y = %d", character1.name, character1.level, character1.pos.x, character1.pos.y);
    return 0;
}