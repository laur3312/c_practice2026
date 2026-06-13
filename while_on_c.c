#include <stdio.h>

int main(void)
{
    int n;
    int s = 0;
    
    if(scanf("%d", &n) != 1){
        printf("ERROR: INPUT ERROR\n");
    return 0;
    }

    while(n > 0){
        s += n * n;
        n--;
    }
    printf("s = %d\n5", s);
    return 0;
}

