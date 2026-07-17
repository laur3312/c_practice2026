#include <stdio.h>

int main(void)
{
    FILE *file = fopen("unknown.txt", "r");
    if (file == NULL) {
        perror("Error unknown.txt"); 
    }

    file = fopen("unknown.txt", "w+");
    if (file == NULL) return 1;

    fputs("Hello World", file); 

    long pos = ftell(file);
    printf("pos: %ld\n", pos);


    fseek(file, 6, SEEK_SET);


    char ch = fgetc(file);
    printf("Прочитанный символ: %c\n", ch); 

    fclose(file);
    return 0;
}
