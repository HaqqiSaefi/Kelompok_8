#include<iostream>
using namespace std;

int main(){
	int var1 = 4, var2 = 7, var3 = 11;
	int* varPtr1 = &var1;
	int* varPtr2 = &var2;
	int* varPtr3 = &var3;
	
	cout<<"alamat memori var 1 : "<<&var1<<endl;
	cout<<"nilai dari variabel yang ditunjuk varPtr 1 : "<<*varPtr1<<endl;
	cout<<endl;
	cout<<"alamat memori var 2 : "<<&var2<<endl;
	cout<<"nilai dari variabel yang ditunjuk varPtr 2 : "<<*varPtr2<<endl;
	cout<<endl;
	cout<<"alamat memori var 3 : "<<&var3<<endl;
	cout<<"nilai dari variabel yang ditunjuk varPtr 3 : "<<*varPtr3<<endl;
	
	
	return 0;
}

