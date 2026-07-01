#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int *mas = malloc(3 * sizeof(int));

    if (mas == NULL) {
        return 1;
    }

    mas[0] = 10;
    mas[1] = 20;
    mas[2] = 30;

    printf("Value: %d\n", mas[1]);

    free(mas);
    return 0;
}