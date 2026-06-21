#include <stdio.h>



int main(void)
{
    char type[] = "FLOAT";
    type[0] = 'P';

    char *text = "Hello";



    printf("Type: %s\n", type);
    
    printf("Text: %s\n", text); 


    type[2] = '\0';

    printf("New Type: %s\n", type);
    return 0;
}