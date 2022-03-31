// Nama File : 02_SelisihTinggi.c
// Deskripsi : Menghitung dan menampilkan besarnya selisih ketinggian terbesar puncak bukut dengan lembah bukit atau sebaiknya
// Nama: Azra Muhammad Bhaskarogra
// NIM: 24060121140040

#include <stdio.h>

int main()
{
  // Kamus
  int h, i, max, min;

  // Algoritma
  printf("Masukkan jumlah data: ");
  scanf("%d", &h);
  int T[h];

  for (i = 0; i < h; i++)
    scanf("%d", &T[i]);

  max = T[0];
  min = T[0];

  for (i = 0; i < h; i++)
    if (T[i] > max)
      max = T[i];

  for (i = 0; i < h; i++)
    if (T[i] < min)
      min = T[i];

  printf("Maksimum: %d\nMinimum: %d\nSelisih ketinggiannya adalah: %d", max, min, max - min);
  return 0;
}