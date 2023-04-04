#include <stdio.h>

void kuadrat(int *ptr_nilai) {
  int nilai = *ptr_nilai; 
  int hasil = nilai * nilai;
  printf("menghasilkan kuadrat dari %d adalah %d\n", nilai, hasil);
}

int main() {
  int nilai = 20;
  int *ptr_nilai = &nilai;

  kuadrat(ptr_nilai); 

  return 0;
}

