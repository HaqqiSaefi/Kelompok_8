#include <stdio.h> 
int main (){
int var1;
int var2;
int var3;

int* varPtr1 = &var1;
int* varPtr2 = &var2;
int* varPtr3 = &var3;

printf("alamat dari var : %x \n", &var1);
printf("alamat dari var : %x \n", &var2);
printf("alamat dari var : %x \n", &var3);

printf("Nilai dari varPtr : %d \n", *varPtr1);
printf("Nilai dari varPtr : %d \n", *varPtr2);
printf("Nilai dari varPtr : %d \n", *varPtr3);
}

