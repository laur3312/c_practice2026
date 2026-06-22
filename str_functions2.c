#include <stdio.h>


#include <string.h>



int main(void)
{
    char s1[] = "Hello";
    char s2[] = "Hello";


    int i = 0;

    while (s1[i] != '\0' && s2[i]!= '\0'){
        if(s1[i] != s2[i]){
            puts("Error");
            return 0;
        }
        i++;
    }


    if(s1[i] != s2[i]){
        puts("Len Error");
    }


    puts("Success operation");
    return 0;
}




