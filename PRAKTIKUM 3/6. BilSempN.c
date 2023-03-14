//Nama: Tirza Aurellia Wijaya//
//NIM: 24060122130047//
//Tanggal Pembuatan: Selasa, 14 Maret 2023//

#include <stdio.h>
#include <stdlib.h>

int main(){
//Kamus//
    int N; 
    int i; 
    int j; 
    int faktor; 
    printf("Masukkan nilai bilangan bulat positif N = ");
//Algoritma//
    if (N <= 0) {
        printf("N harus positif");
    } else {
        printf("Bilangan sempurna sampai dengan bilangan %d =",N);
        for (i = 1; i <= N; i++) {
            faktor = 0;
            for (j = 1; j < i; j++) {
                if (i % j == 0) {
                    faktor += j;
                }
            }
        if (faktor == i) {
            printf(" %d",i);
        }
        }
    }

    return 0;
}
