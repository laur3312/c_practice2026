#include <stdio.h>

void print_hi(void)
{
    puts("Hello! I'm Sergey Balakirev!");
}

int get_per(int width, int height)
{
    int p = 2 * (width + height);
    return p;
}

int main(void)
{
    int w = 2, h = 5;

    print_hi();

    int per_0 = get_per(w, h); 
    int per_1 = get_per(w + 1, h - 4);
    int per_2 = get_per(w, 3);
    int per_3 = get_per(1, 3);

    printf("per_0 = %d\n", per_0);
    printf("per_1 = %d\n", per_1);
    printf("per_2 = %d\n", per_2);
    printf("per_3 = %d\n", per_3);

    return 0;
}