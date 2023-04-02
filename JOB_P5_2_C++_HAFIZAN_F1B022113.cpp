#include<iostream>
using namespace std;

int main(){
	int var11,var12,var13 ;
	
	int* varPtr11 = &var11;
	int* varPtr12 = &var12;
	int* varPtr13 = &var13;
	
	cout<<"alamat memori var 11 : "<<&var11<<endl;
	cout<<"isi varPtr 11 : "<<varPtr11<<endl;
	cout<<endl;
	cout<<"alamat memori var 12 : "<<&var12<<endl;
	cout<<"isi varPtr 12 : "<<varPtr12<<endl;
	cout<<endl;
	cout<<"alamat memori var 13 : "<<&var13<<endl;
	cout<<"isi varPtr 13 : "<<varPtr13<<endl;
	return 0;
}

