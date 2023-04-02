#include <iostream>
using namespace std;
int main(){
	int a = 12;
	int*aPtr=&a;
	int**aPtrPtr = &aPtr;
	
	cout<<"alamat dari variable pointer aPtr: "<< &aPtr<<endl;
	cout<<"nilai dari aPtr : "<<*aPtr<<endl;
	cout<<"alamat dari variable pointer aPtrPtr : "<<&aPtr<<endl;
	cout<<"nilai dari aPtrPtr : "<<**aPtrPtr;
	
	return 0;
}

