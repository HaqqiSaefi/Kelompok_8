#include <stdio.h>
int main ()
{
	char* var = "HULUL";
	int i;
	for (i=0; i<2; i++){
		printf ("%c", *var);
		var++;
	}
	
}

