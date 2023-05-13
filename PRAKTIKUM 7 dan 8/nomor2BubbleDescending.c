/*
Nama Program  : BubbleSort Descending
Deskripsi     : Mengurutkan tabel integer dengan bubble sort secara menurun
Nama Pembuat  : Azzam Saefudin Rosyidi
NIM           : 24060122130076
Tanggal       : 13 Mei 2023
*/

#include <stdio.h>
#include <stdbool.h>

void bubbleSort(int T[], int n) {

  //kamus lokal
  
  int i,j; 
  int temp;
  bool tukar;

  //algoritma
  
  tukar = true;
  i=0;
  while (i < n  && tukar) {
    tukar = false;
    for(j=0; j<n; j++) {
      if (T[j] < T[j + 1]) {

        temp = T[j];
        T[j] = T[j + 1];
        T[j + 1] = temp;
        
        tukar = true;
      }
      
    }
    i++;
  }
}

int main(void) {

  //kamus lokal

  int T[] = {3, 10, 2, 5, 6, 7, 1};
  int n = sizeof(T) / sizeof(T[0]);

  //algoritma
  
  bubbleSort(T, n);

  printf("Data yang sudah terurut: \n");
  for (int i = 0; i < n; i++) {
    printf("%d ", T[i]);
  }
  printf("\n");
  return 0;
}
