#include <stdio.h>

void kuadrat(int *ptr_nilai) {
  int nilai = *ptr_nilai; 
  int hasil = nilai * nilai;
  printf("Hasil kuadrat dari %d adalah %d\n", nilai, hasil);
}

int main() {
  int nilai = 80;
  int *ptr_nilai = &nilai;

  kuadrat(ptr_nilai); 

  return 0;
}

