// Nama         : Azra Muhammad Bhaskarogra
// NIM          : 24060121140040
// Tanggal      : 17 Maret 2022
// Nama Program : 14_HargaDiskon.c
/* Deskripsi    : Menghitung dan menampilkan harga akhir belanjaan setelah dipotong diskon berdasarkan jenis barang */

#include <stdio.h>
#include <stdlib.h>

int main(){
    //Kamus
    int harga;
    char jenis;

    //Algoritma
    printf("Masukkan jenis barang antara A - C : ");
    scanf(" %c",&jenis);
    printf("Masukkan harga barang : ");
    scanf("%d", &harga);
    switch (jenis){
        case 'A' :
            printf("%d", 90 * harga / 100);
            break;
        case 'B' :
            printf("%d",(85* harga / 100));
            break;
        case 'C' :
            printf("%d", 80* harga / 100);
            break;
    }
    return 0;
}
