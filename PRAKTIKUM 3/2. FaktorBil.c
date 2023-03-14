//Nama: Tirza Aurellia Wijaya//
//NIM: 24060122130047//
//Tanggal Pembuatan: Selasa, 14 Maret 2023//

#include<stdio.h>

int main(){
//Kamus//
   int N,i;

   printf("Masukkan nilai N : ");
   scanf("%d", &N);
//Algoritma//
   for(i = 1; i <= N; i++)
    {
        if(N % i == 0)
        {
            printf("%d ", i);
        }
    }
}
