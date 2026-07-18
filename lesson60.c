#include <stdio.h>

int main(void)
{
    FILE *f = fopen("test60.txt", "w");
    if (f == NULL) return 1;

    fputs("Hello", f);
    fflush(f); 
    fclose(f);

    f = fopen("test60.txt", "r");
    if (f == NULL) return 1;

    char ch;
    while ((ch = fgetc(f)) != EOF) 
    {
        printf("%c", ch); 
    }

    fclose(f);
    return 0;
}
