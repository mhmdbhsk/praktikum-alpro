// Nama         : Azra Muhammad Bhaskarogra
// NIM          : 24060121140040
// Tanggal      : 17 Maret 2022
// Nama Program : 13_BiayaParkir.c
/* Deskripsi    : Menghitung dan menampilkan total akhir biaya parkir berdasarkan lama parkir */

#include <stdio.h>
#include <stdlib.h>

int main(){
    //Kamus
    int t,biaya;
    char inisial;

    //Algoritma
    printf("Masukkan lama waktu parkir : ");
    scanf("%d",&t);
    if (t>-1 && t<= 2){
        biaya = 2000;
        printf("%d",biaya);
    }
    else {
        biaya = 2000 + ((t-2)*500);
        printf("%d",biaya);
    }
    return 0;
}
