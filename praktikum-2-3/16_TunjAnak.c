// Nama         : Azra Muhammad Bhaskarogra
// NIM          : 24060121140040
// Tanggal      : 17 Maret 2022
// Nama Program : 16_TunjAnak.c
/* Deskripsi    : Menghitung dan menampilkan pada layar tunjangan anak yang diperoleh berdasarkan gaji pokok dan jumlah anak */

#include <stdio.h>
#include <stdlib.h>

int main(){
    //Kamus
    int anak,gaji, tunj;

    //Algoritma
    printf("Masukkan jumlah anak yang dimiliki : ");
    scanf("%d",&anak);
    printf("Masukkan jumlah gaji : ");
    scanf("%d", &gaji);
    if(anak>= 0 && gaji>0){
        if(anak<3){
            tunj = anak * 10 * gaji / 100;
            printf("%d",tunj);
        }
        else{
            tunj = 3 * 10 * gaji / 100;
            printf("%d",tunj);
        }
    }
    else{
        printf("Angka yang dimasukkan tidak valid");
    }
    return 0;
}
