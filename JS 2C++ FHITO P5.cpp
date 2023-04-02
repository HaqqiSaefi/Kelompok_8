#include <iostream>
using namespace std;

int main(){ 
int var1;
int var2;
int var3;
int* varPtr1 = &var1;
int* varPtr2 = &var2;
int* varPtr3 = &var3;
cout	<<	"alamat	memori:"<< &var1<<endl;
cout	<<	"alamat	memori:"<< &var2<<endl;
cout	<<	"alamat	memori:"<< &var3<<endl;
cout	<<	"isi	varPtr	:"<< *varPtr1<<endl;
cout	<<	"isi	varPtr	:"<< *varPtr2<<endl;
cout	<<	"isi	varPtr	:"<< *varPtr3<<endl;
}

