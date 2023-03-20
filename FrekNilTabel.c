#include <stdio.h>
#include <stdlib.h>

int main(void){
  int N;
  int count;
  int i;
  int j;
  int T[10] = {7, 4, 5, 7, 6, 5, 3, 5, 1, 4};

  count = 1;

  for(i = 0; i <= 10; i++){
    for (j = 1; j <= 10; j++){
        if (T[i] != 0 && T[i] == T[j]){
            count = count + 1;
            T[j] = 0;
        }
    }
    if (count > 1){
        printf ("nilai yang frekuensi kemunculannya lebih dari 1 kali ialah: %d", T[i]);
    }
  }
  return 0;

}
