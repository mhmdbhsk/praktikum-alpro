// Nama       : Azra Muhammad Bhaskarogra
// NIM        : 24060121140040
// Nama file  : sortSelection.c
// Tanggal    : 19 Mei 2022
// Deskripsi  : Mengurutkan dengan cara membandingkan dan mengurutkan dua data pertama pada array

#include <stdio.h>
#include "arrFunction.c"

void sortInsertion(int arr[], int n)
{
  // Kamus lokal
  int i, j, key;

  // Algoritma
  for (i = 1; i < n; i++)
  {
    key = arr[i];
    j = i - 1;
    while (j >= 0 && arr[j] > key)
    {
      arr[j + 1] = arr[j];
      j--;
    }
    arr[j + 1] = key;
  }
}

int main()
{
  // Kamus lokal
  int arr[] = {5, 1, 4, 5, 22, 51, 28, 6, 9, 20, 55, 34, 22};
  int n;

  // Algoritma
  n = sizeof(arr) / sizeof(arr[0]);
  printArr(arr, n);
  sortInsertion(arr, n);
  printArr(arr, n);

  return 0;
}