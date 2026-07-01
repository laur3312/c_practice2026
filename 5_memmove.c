#include <stdio.h>
#include <string.h>

int main(void) {
    char text[] = "ABCDE";

    memmove(&text[2], &text[1], 3);

    printf("Shift result: %s\n", text);
    return 0;
}