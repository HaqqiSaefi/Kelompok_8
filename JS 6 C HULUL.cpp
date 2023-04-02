#include <stdio.h>
void tampilkan (int* value){
	*value = (*value)*(*value);
}

int main()
{
	int var = 10;
	int varptr = var;
	 printf("Sebelum di kuadratkan: %d\n", var);
	 tampilkan(&var);
	 printf("Setelah di kuadratkan: %d\n", var);
}
	

