#include <iostream>
using namespace std;
int main()
{
	int var [10] = {1,2,3,4,5,6,7,8,9,10};
	int* varptr = var;
	
	
  for (int i = 0; i < 10; i++){
  
	cout << *varptr << endl;
	varptr++;
}
return 0;

}

