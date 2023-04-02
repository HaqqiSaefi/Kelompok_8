#include <stdio.h>
int main(){
	int var1 = 20,var2 =30,var3=60;
	int* varPtr1 = &var1;
	int* varPtr2 = &var2;
	int* varPtr3 = &var3;
	
	printf("alamat dari var 1 : %x \n", &var1);
	printf("Nilai yang ditunjukkan varPtr 1 : %x \n\n",varPtr1);
	
	printf("alamat dari var 2 : %x \n", &var2);
	printf("Nilai yang ditunjukkan varPtr : %x \n\n",varPtr2);
	
	printf("alamat dari var 3 : %x \n", &var3);
	printf("Nilai yang ditunjukkan varPtr1 : %x \n\n",varPtr3);
	
	
	
}

