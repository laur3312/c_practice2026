#include <stdio.h>
#include <string.h>

int main() {
    char a[] = "Hello"; 
    int len = (int)strlen(a); // Считает количество букв
    printf("Dlina: %d\n", len);

    char b[] = "Code";
    char c[100];
    char d[100];

    strcpy(c, b); // Копирует всю строку из b в c
    printf("Skopirovano: %s\n", c);

    strncpy(d, b, 2); // Копирует только 2 первых символа из b в d
    d[2] = '\0';
    printf("Kusochek: %s\n", d);

    char e[100] = "Hi ";
    char f[] = "Alex";

    strcat(e, f); // Приклеивает строку f в конец строки e
    printf("Skleeno: %s\n", e);

    char g[100] = "Error: ";
    char h[] = "404 Not Found";
    strncat(g, h, 3); // Приклеивает только 3 первых символа из h в конец g
    printf("Skleeno kusok: %s\n", g);

    return 0;
}