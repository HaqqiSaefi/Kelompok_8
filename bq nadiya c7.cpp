#include <iostream>
using namespace std;

void square(int* ptr) {
*ptr = (*ptr) * (*ptr);
}

int main() {

int var = 20;
int* ptr = &var;

cout << "Sebelum kuadrat: " << var << endl;

square(ptr);

cout << "Sesudah kuadrat: " << var << endl;

return 0;
}

