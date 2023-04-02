#include <iostream>

using namespace std;

int main() {
int var = 23;
int* varPtr = &var;
int** varPtrPtr = &varPtr;

cout << "Alamat variabel biasa var: " << &var << endl;

cout << "Nilai variabel biasa var: " << var << endl << endl;

cout << "Alamat variabel pointer varPtr: " << &varPtr << endl;

cout << "Nilai variabel pointer varPtr: " << varPtr << endl;

cout << "Nilai yang ditunjuk oleh varPtr: " << *varPtr << endl << endl;
 

cout << "Alamat variabel pointer varPtrPtr: " << &varPtrPtr << endl;
cout << "Nilai variabel pointer varPtrPtr: " << varPtrPtr << endl;

cout << "Nilai yang ditunjuk oleh varPtrPtr: " << *varPtrPtr << endl; cout << "Nilai yang ditunjuk oleh **varPtrPtr: " << **varPtrPtr << endl;

return 0;
}

