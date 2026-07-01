#include <stdio.h>
#include <string.h>

int main(void) {
    char a[] = "WIFI";
    char b[5];

    memcpy(b, a, 5);

    printf("Copied string: %s\n", b);
    return 0;
}