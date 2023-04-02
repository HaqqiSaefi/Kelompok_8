#include <iostream>
#include <string>

using namespace std;

int main() {
    string str = "fhito";
    char *ptr = &str[0];
    
    cout << "Huruf pertama: " << *ptr << endl;
    cout << "Huruf terakhir: " << *(ptr + str.length()-1) << endl;

    return 0;
}

