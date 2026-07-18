#include <stdio.h>


int main(void)
{

    int my_number = 999;
    int secret_number;
    FILE *f = fopen("data.bin", "wb");

    if(f == NULL) return 1;

    fwrite(&my_number, sizeof(int), 1, f);

    fclose(f);

    f = fopen("data.bin", "rb");

    fread(&secret_number, sizeof(int), 1, f);
    fclose(f);
    printf("Secret_number: %d", secret_number);
    return 0;

}