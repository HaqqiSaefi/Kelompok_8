#include <iostream>

using namespace std;

void kuadrat(int *x) {
    *x = (*x) * (*x);
}

int main() {
    int angka = 12;

    cout << "angka: " << angka << endl;

    kuadrat(&angka);    // memanggil fungsi kuadrat dengan parameter berupa pointer

    cout << "angka setelah di kuadratkan: " << angka << endl;

    return 0;
}

