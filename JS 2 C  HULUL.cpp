#include <stdio.h>
int main()
{
	int var1;
	int var2;
	int var3;
	int* varptr1 = &var1;
	int* varptr2 = &var2;
	int* varptr3 = &var3;
	
	printf ("hulul: %p\n", &var1);
	printf ("widiani: %p\n", &var2);
	printf ("widi: %p\n", &var3);
	printf ("10 :%p\n", &var1);
	printf ("03 :%p\n", &var2);
	printf ("04 :%p\n", &var3);
	
}

