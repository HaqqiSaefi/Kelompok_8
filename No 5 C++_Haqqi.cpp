#include <iostream>
using namespace std;

int main() {
string nama = "Haqqi";
  string *ptr_nama = &nama; 

  cout << "Huruf Pertama: " << (*ptr_nama)[0] << endl;
  
  cout << "Huruf Terakhir: " << (*ptr_nama)[nama.length()-1] << endl;

  return 0;
}

