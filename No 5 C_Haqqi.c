#include <stdio.h>
#include <string.h>

int main() {
  char nama[] = "Haqqi";
  char *ptr_nama = nama; 

  printf("Huruf Pertama: %c\n", *ptr_nama);

  printf("Huruf Terakhir: %c\n", *(ptr_nama + strlen(nama) - 1));

  return 0;
}

