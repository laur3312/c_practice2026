#include <stdio.h>
#include <math.h>


int main(void)
{
    int item;
    printf("1. Learning C language\n"
       "2. Learning Python language\n"
       "3. Learning Java language\n"
       "4. Learning C++ language\n"
       "5. Exit\n");


    if (scanf("%d", &item) != 1) {
        printf("ERROR: INPUT ERROR");
        return 0;
    }

    switch(item) {
    case 1:
        printf("1. Learning C language\n");
        break;
    case 2:
        printf("2. Learning Python language\n");
        break;
    case 3:
        printf("3. Learning Java language\n");
        break;
    case 4:
        printf("4. Learning C++ language\n");
        break;
    case 5:
        printf("5. Exit\n");
        break;
      }

    return 0;
}
