#include <iostream>

int main() {
    int a = 5, b = 10, c = 15;
    int *ptra = &a, *ptrb = &b, *ptrc = &c;

    std::cout << "Nilai a: " << a << std::endl;
    std::cout << "Nilai b: " << b << std::endl;
    std::cout << "Nilai c: " << c << std::endl;

    std::cout << "Nilai dari a yang ditunjuk oleh ptra: " << *ptra << std::endl;
    std::cout << "Nilai dari b yang ditunjuk oleh ptrb: " << *ptrb << std::endl;
    std::cout << "Nilai dari c yang ditunjuk oleh ptrc: " << *ptrc << std::endl;

    return 0;
}

