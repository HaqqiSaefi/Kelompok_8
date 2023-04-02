#include <iostream>
using namespace std;
int main()
{ 
	int var = 15; 
	int varptr = 20;
 	int varptrptr = 33;
	int* varPtr = &var; 
	int** varPtrPtr = &varPtr; 
	cout << "Alamat dari variable pointer var :" << &var << endl; 
 	cout << "nilai dari var :" << var << endl; 
 	
 	cout << "Alamat dari variable pointer varPtr :" << &var << endl; 
 	cout << "nilai dari varPtr :" << varptr << endl; 
 	
 	cout << "Alamat dari variable pointer varPtrPtr :" << &varPtr << endl; 
 	cout << "nilai dari varPtr :" << varptrptr << endl; 
}

