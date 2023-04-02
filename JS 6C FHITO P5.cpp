#include <stdio.h>

void kuadrat(int *x) {
    *x = (*x) * (*x);
}

int main() {
    int angka = 10;

    printf("angka: %d\n", angka);

    kuadrat(&angka);    // memanggil fungsi kuadrat dengan parameter berupa pointer

    printf("angka setelah di kuadratkan: %d\n", angka);

    return 0;
}

