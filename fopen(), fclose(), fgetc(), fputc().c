#include <stdio.h>



int main(void)
{
    FILE *file = fopen("hi.txt", "w");
    if(file == NULL) return 1;



    fputc('H', file);
    fputc('I', file);

    fclose(file);


    file = fopen("hi.txt", "r");

    char ch1 = fgetc(file);
    char ch2 = fgetc(file);

    printf("hi.txt: %c%c", ch1, ch2);
    fclose(file);
    return 0;
    
}