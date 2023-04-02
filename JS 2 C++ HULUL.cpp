#include <iostream>
using namespace std;
int main()
{
	int var1;
	int var2;
	int var3;
	int var4;
	int* varptr1 = &var1;
	int* varptr2 = &var2;
	int* varptr3 = &var3;
	
	cout << "hulul:" <<&var1<<endl;
	cout << "widiani:" <<&var2<<endl;
	cout << "widi:" <<&var3<<endl;
	cout << "10 :" << *varptr1 <<endl;
	cout << "03 :" << *varptr2 <<endl;
	cout << "04 :" << *varptr3 <<endl;

	
}

