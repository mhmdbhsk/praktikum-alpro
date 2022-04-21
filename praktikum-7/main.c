// Nama File    : main.c
// Deskripsi    : Mencari harga X dalam Tabel T secara sekuensial mulai dari T1
// Nama         : Azra Muhammad Bhaskarogra
// NIM          : 24060121140040

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#include "sequentialSearchX1.h"

int main()
{
    // Kamus
    int X = 38;
    int A[] = {0,1,2,34,-5,8,-9,12,38,70,33,51};
    int N = sizeof(A)/ sizeof(A[0]);
    int K;

    // Algoritma
    sequentialSearchX1(A, N, &K, X);
    if(K != -1){
        printf("X ditemukan pada index ke-%d\n", K);
        if (X < 0){
            printf("X merupakan bilangan negatif. \n");
        }
        else{
            printf("X merupakan bilangan positif. \n");
        }
    }
    else{
        printf("X Tidak ditemukan\n");
    }

    return 0;
}
