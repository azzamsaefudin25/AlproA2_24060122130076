/*
Nama Program  : JumFrekNiTabel
Deskripsi     : menampilkan jumlah nilai elemen yang frekuensinya lebih dari satu
Nama Pembuat  : Azzam Saefudin Rosyidi
NIM           : 24060122130076
Tanggal       : 18 Maret 2023
*/

#include<stdlib.h>
#include <stdio.h>
int main(void) {

    //kamus lokal
    int i,j; //iterator
    int N; //panjang tabel
    int count; //jumlah kemunculan elemen
    int jumlah; //jumlah nilai elemen
    int *T; //tabel dengan panjang N

    //algoritma
    jumlah=0;
    printf("Masukkan jumlah elemen N : ");
    scanf("%d", &N);

    T = (int*)malloc(N*sizeof(int));
    printf("Masukkan %d bilangan integer :\n",N);

    for (i = 0; i < N; i++){
        scanf("%d", &T[i]);
    }
    printf("jumlah nilai elemen yang frekuensinya lebih dari satu: \n");
    for (i = 0; i < N; i++){
        count = 1;
        for (j = i+1; j < N; j++) {
            if (T[i] == T[j]) {
                count++;
                T[j] = 0; 
            }
        }
        if (count > 1 && T[i] != 0) {
            jumlah=jumlah+(count*T[i]);
        }
    }
    printf("%d\n",jumlah);
    free(T);
    return 0;
}