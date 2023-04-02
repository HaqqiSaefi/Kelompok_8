#include <stdio.h>

int main() {
    char str[] = "fhito";
    char *ptr = str;
    
    printf("Huruf pertama: %c\n", *ptr);
    printf("Huruf terakhir: %c\n", *(ptr + 4));

    return 0;
}

