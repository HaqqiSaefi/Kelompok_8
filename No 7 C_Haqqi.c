#include <stdio.h>

int main() {
  int nilai = 10; 
  int *ptr_nilai = &nilai; 
  int **ptr_ptr_nilai = &ptr_nilai; 

  printf("nilai: %d\n", nilai);
  printf("alamat variabel nilai: %x\n", &nilai);
  printf("alamat pointer ptr_nilai: %x\n", &ptr_nilai);
  printf("alamat pointer ptr_ptr_nilai: %x\n", &ptr_ptr_nilai);
  printf("nilai yang ditunjuk oleh ptr_nilai: %x\n", *ptr_nilai);
  printf("alamat yang ditunjuk oleh ptr_nilai: %x\n", ptr_nilai);
  printf("nilai yang ditunjuk oleh ptr_ptr_nilai: %x\n", **ptr_ptr_nilai);
  printf("alamat yang ditunjuk oleh ptr_ptr_nilai: %x\n", *ptr_ptr_nilai);
  return 0;
}

