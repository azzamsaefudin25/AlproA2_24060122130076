/*
Nama Program  : NilMax2Tabel
Deskripsi     : menampilkan nilai maksimum ke 2 
Nama Pembuat  : Azzam Saefudin Rosyidi
NIM           : 24060122130076
Tanggal       : 13 Maret 2023
*/
#include <stdio.h>
#include <stdlib.h>

int main(void) {
    //kamus lokal
    int i;  //iterator
    int N; //jumlah elemen(panjang tabel)
    int *T; //tabel dengan panjang N

    //algoritma
    printf("Masukkan jumlah elemen N: ");
    scanf("%d", &N);
    
    T = (int*)malloc(N*sizeof(int));
    int max1 = 0;
    int max2 = 0;
    printf("Masukkan %d bilangan integer :\n", N);

    for (i = 0; i < N; i++){
        scanf("%d", &T[i]);
    }
    for (i = 0; i < N; i++){
        if (T[i] > max1) {
            max2 = max1;
            max1 = T[i];
        }if (T[i] > max2 && T[i] < max1){
            max2 = T[i];
        }
    }
    printf("nilai maksimum ke-2 : %d", max2);
    free(T);
    return 0;
}

