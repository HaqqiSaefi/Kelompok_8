#include <iostream>
using namespace std;
void tampilkan (int* value){
	*value = (*value)*(*value);
}
int main ()
{
	int var = 10;
	int varptr = var;
	cout<< "Sebelum di kuadratkan: " << var << endl;
	tampilkan (&var);
	cout << "Setelah di kuadratkan: " << var <<endl;
}

