#include <iostream>
#include <string>
using namespace std;
int main ()
{
	string var = "HULUL";
	char* varptr = &var[1];
	for (int i = 0; i < 2; i++){
		cout<< *varptr;
		varptr;
	}
}

