#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int *mas = calloc(3, sizeof(int));

    if (mas == NULL) {
        return 1;
    }

    printf("Zero value: %d\n", mas[0]);

    free(mas);
    return 0;
}