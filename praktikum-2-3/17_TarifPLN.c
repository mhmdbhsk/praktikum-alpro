// Nama         : Azra Muhammad Bhaskarogra
// NIM          : 24060121140040
// Tanggal      : 17 Maret 2022
// Nama Program : 17_TarifPLN.c
/* Deskripsi    : Menghitung dan menampilkan tarif listrik berdasarkan golongan dan pemakaian daya listrik */

#include <stdio.h>
#include <stdlib.h>

int main(){
    //Kamus
    int gol,pakai;

    //Algoritma
    printf("Masukkan golongan listrik : ");
    scanf("%d",&gol);
    printf("Masukkan jumlah pemakaian dalam KWH : ");
    scanf("%d", &pakai);
    if(gol == 1){
        if(pakai > 0 && pakai <= 100){
            printf("%d",100*1000);
        }
        else if (pakai > 100 && pakai < 1000){
            printf("%d",pakai*1000);
        }
        else if (pakai>=1000){
            printf("%d", pakai*1000 + (pakai*1000*10/100));
        }
        else{
            printf("Angka pakai harus diatas 0 KwH");
        }
    }
    else{
        if(pakai > 0 && pakai <= 100){
            printf("%d",100*2000);
        }
        else if (pakai > 100 && pakai < 1000){
            printf("%d",pakai*2000);
        }
        else if (pakai>=1000){
            printf("%d", pakai*2000 + (pakai*2000*10/100));
        }
        else{
            printf("Angka pakai harus diatas 0 KwH");
        }
    }
    return 0;
}
