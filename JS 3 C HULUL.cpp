#include <stdio.h>
int main()
{
	int var1 = 3;
	int var2 = 129;
	int var3 = 15;
	int* varptr1 = &var1;
	int* varptr2 = &var2;
	int* varptr3 = &var3;

	printf ("nilai dari varPtr1 :%d\n", *varptr1);
	printf ("nilai dari varPtr2 :%d\n", *varptr2);
	printf ("nilai dari varPtr3 :%d\n", *varptr3);
	
}

