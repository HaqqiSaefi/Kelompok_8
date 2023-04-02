#include <iostream>
using namespace std;
int main(){
	int a = 12;
	int*aPtr=&a;
	int**aPtrPtr = &aPtr;
	
	
	printf("alamat dari variable pointer aPtr: %d\n", &aPtr);
	printf("nilai dari aPtr : %d\n", *aPtr);;
	printf("alamat dari variable pointer aPtrPtr : %d\n", &aPtr);
	printf("nilai dari aPtrPtr : %d\n", **aPtrPtr);
	
	return 0;
	
}

