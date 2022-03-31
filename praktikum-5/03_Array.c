// Nama File : 03_Array.c
// Deskripsi : Menghitung dan menampilkan besarnya penjumlahan sub array.
// Nama: Azra Muhammad Bhaskarogra
// NIM: 24060121140040

#include <stdio.h>

int main()
{
    // Kamus
    int o, p, q, sum;

    // Algoritma
    printf("Masukkan jumlah elemen: ");
    scanf("%d", &o);
    int T[o];
    sum = 0;

    for (p = 0; p < o; p++)
        scanf("%d", &T[p]);

    for (p = 0; p < o; p++)
    {
        printf("(");
        for (q = p; q < o; q++)
        {
            sum += T[q];
            if (q != o - 1)
                printf("%d + ", T[q]);
            else
                printf("%d", T[q]);
        }
        if (p != o - 1)
            printf(") + ");
        else
            printf(")");
    }
    printf("\nJumlah dari array dan sub-array adalah: %d", sum);
    return 0;
}