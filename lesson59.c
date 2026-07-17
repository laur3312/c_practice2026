#include <stdio.h>


int main(void)
{
    FILE *f = fopen("fileee.txt", "w");

    fputs("hi\n", f);
    fprintf(f,"id:&d", 7);


    fclose(f);


    f = fopen("fileee.txt", "r");
    char buf[20];
    int id;

    fgets(buf, 20, f);
    fscanf(f, "id: %d", &id);
    fclose(f);
    return 0;
}