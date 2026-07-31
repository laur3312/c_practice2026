#include <stdio.h>
#include <stdlib.h>
#include <time.h>



int main(void)
{
    int guess, secret;
    srand(time(NULL));
    secret = rand() % 100 +1;

    printf("Угадай число: ");
    do{
        scanf("%d", &guess);
        if(guess < secret){
            printf("Больше: ");
        }
        if(guess > secret){
            printf("Меньше: ");
        }
    }while(guess != secret);

        if(guess == secret){
            printf("Поздравляю! это число: %d", secret);
        }
        return 0;
}