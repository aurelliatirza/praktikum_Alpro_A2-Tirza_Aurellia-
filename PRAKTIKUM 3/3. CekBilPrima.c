//Nama: Tirza Aurellia Wijaya//
//NIM: 24060122130047//
//Tanggal Pembuatan: Selasa, 14 Maret 2023//

#include <stdio.h>
#include <stdlib.h>

int main(void){
//Kamus//
    int N; 
    int i; 
    int faktor = 0; 
    int val;
    printf("Masukkan nilai bilangan bulat positif N = ");
    val = scanf("%d",&N);
//Algoritma//
    if (N <= 0) {
        printf("N harus positif");
    } else {
        for (i = 1; i < N; i++) {
            if (N % i == 0) {
                faktor += i;
            }
        }
    }
    if (faktor == N) {
        printf("Bilangan sempurna");
    } else {
        printf("Bukan bilangan sempurna");
    }

    return 0;
}
