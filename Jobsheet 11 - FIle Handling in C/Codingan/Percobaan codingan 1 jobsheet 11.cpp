#include <stdio.h>

int main()
{
  char buff[255];
  FILE *fptr;

  // membuka file
  if ((fptr = fopen("puisi.txt","r")) == NULL){
      printf("Error: File tidak ada!");
      // Tutup program karena file gak ada.
      return(1);
  }

  // baca isi file dengan gets lalu simpan ke buff
  fgets(buff, 255, fptr);
  // tampilkan isi file
  printf("%s", buff);

  // tutup file
  fclose(fptr);
}