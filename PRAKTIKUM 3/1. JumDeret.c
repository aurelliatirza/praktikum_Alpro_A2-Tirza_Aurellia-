//Nama: Tirza Aurellia Wijaya//
//NIM: 24060122130047//
//Tanggal Pembuatan: Selasa, 14 Maret 2023//
#include <stdio.h>
#include <stdlib.h>

int main(void){
  
//Kamus//
    int N, i, total = 0;
    printf("Masukkan nilai N: ");
    scanf("%d", &N);
//Algoritma//
    for(i = 1; i <= N; i++)
    {
        total += i;
    }
    printf("Jumlah total deret bilangan adalah: %d", total);
return 0;
}
