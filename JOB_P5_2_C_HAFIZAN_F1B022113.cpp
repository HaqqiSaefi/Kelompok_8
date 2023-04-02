#include <stdio.h>
int main(){
	int var11,var12,var13;
	int* varPtr11 = &var11;
	int* varPtr12 = &var12;
	int* varPtr13 = &var13;
	
	printf("alamat dari var 11 : %x \n", &var11);
	printf("Nilai dari varPtr : %x \n\n",varPtr11);
	
	printf("alamat dari var 12 : %x \n", &var12);
	printf("Nilai dari varPtr : %x \n\n",varPtr12);
	
	printf("alamat dari var 13 : %x \n", &var13);
	printf("Nilai dari varPtr : %x \n\n",varPtr13);
	
	
	
}

