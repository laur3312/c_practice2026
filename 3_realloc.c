#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int *mas = malloc(2 * sizeof(int));
    if (mas == NULL) {
        return 1;
    }

    mas[0] = 5;
    mas[1] = 7;

    int *new_mas = realloc(mas, 4 * sizeof(int));
    if (new_mas == NULL) {
        free(mas);
        return 1;
    }
    mas = new_mas;

    mas[2] = 9;
    mas[3] = 11;

    printf("Old value: %d\n", mas[1]);

    free(mas);
    return 0;
}