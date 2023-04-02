#include <iostream>
using namespace std;
int main()
{
	int var1 = 5;
	int var2 = 9;
	int var3 = 2;
	int var4;
	int* varptr1 = &var1;
	int* varptr2 = &var2;
	int* varptr3 = &var3;
	
	cout << "isi varptr :" << *varptr1 <<endl;
	cout << "isi varptr :" << *varptr2 <<endl;
	cout << "isi varptr :" << *varptr3 <<endl;

}

