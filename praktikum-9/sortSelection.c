// Nama       : Azra Muhammad Bhaskarogra
// NIM        : 24060121140040
// Nama file  : sortSelection.c
// Tanggal    : 19 Mei 2022
// Deskripsi  : Mengurutkan dengan cara mencari nilai terendah / tertinggi di dalam array

#include <stdio.h>
#include "arrFunction.c"

void sortSelection(int arr[], int n)
{
  // Kamus lokal
  int i, j, min;

  // Algoritma
  for (i = 0; i < n - 1; i++)
  {
    for (j = i + 1; j < n; j++)
    {
      min = i;
      if (arr[j] < arr[min])
      {
        min = j;
      }
      swap(&arr[i], &arr[min]);
    }
  }
}

int main()
{
  // Kamus
  int arr[] = {5, 1, 4, 5, 22, 51, 28, 6, 9, 20, 55, 34, 22};
  int n;

  // Algoritma
  n = sizeof(arr) / sizeof(arr[0]);
  printArr(arr, n);
  sortSelection(arr, n);
  printArr(arr, n);

  return 0;
}