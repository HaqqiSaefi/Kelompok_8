#include <stdio.h> 
int main()
{ 
 int var = 15; 
 int varptr = 20;
 int varptrptr = 33;
 int* varPtr = &var; 
 int** varPtrPtr = &varPtr; 
printf("Alamat dari variable pointer var : %d\n", &var); 
printf("Nilai dari variable pointer var : %d\n", var);

printf("Alamat dari variable pointer varptr : %d\n", &varPtr); 
printf("Nilai dari variable pointer varptr : %d\n", varptr);

printf("Alamat dari variable pointer varptrptr : %d\n", &varPtr); 
printf("Nilai dari variable pointer varptrptr : %d\n", varptrptr);
}

