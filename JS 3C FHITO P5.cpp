#include <stdio.h>

int main() {
    int a = 5, b = 10, c = 15;
    int *ptra = &a, *ptrb = &b, *ptrc = &c;

    printf("Nilai a: %d\n", a);
    printf("Nilai b: %d\n", b);
    printf("Nilai c: %d\n", c);

    printf("Nilai dari a yang ditunjuk oleh ptra: %d\n", *ptra);
    printf("Nilai dari b yang ditunjuk oleh ptrb: %d\n", *ptrb);
    printf("Nilai dari c yang ditunjuk oleh ptrc: %d\n", *ptrc);

    return 0;
}

