// Nama File    : sequentialSearchX1.c
// Deskripsi    : Mencari harga X dalam Tabel T secara sekuensial mulai dari T1.
// Nama         : Azra Muhammad Bhaskarogra
// NIM          : 24060121140040

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#include "sequentialSearchX1.h"

void sequentialSearchX1(int T[], int N, int *K, int X)
{
    // Kamus Lokal
    int i;

    // Algoritma
    i = 0;
    while(i < N-1 && T[i] != X){
        printf("%d\n", i);
        i++;
    }
    if(T[i] == X){
        *K = i;
    }
    else{
        *K = 0;
    }
}
