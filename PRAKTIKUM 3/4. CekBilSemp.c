#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N; 
    int i; 
    int faktor = 0; 
    int val; 
    printf("Masukkan nilai bilangan bulat positif N = ");
    val = scanf("%d",&N);
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
