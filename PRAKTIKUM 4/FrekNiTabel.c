/*
Nama Program  : FrekNiTabel
Deskripsi     : menampilkan nilai elemen yang frekuensinya lebih dari satu
Nama Pembuat  : Azzam Saefudin Rosyidi
NIM           : 24060122130076
Tanggal       : 13 Maret 2023
*/

#include<stdlib.h>
#include <stdio.h>
int main(void) {

    //kamus lokal
    int i,j; //iterator
    int N; //panjang tabel
    int jumlah; //jumlah kemunculan elemen
    int *T; //tabel dengan panjang N

    //algoritma
    printf("Masukkan jumlah elemen N : ");
    scanf("%d", &N);

    T = (int*)malloc(N*sizeof(int));
    printf("Masukkan %d bilangan integer :\n",N);

    for (i = 0; i < N; i++){
        scanf("%d", &T[i]);
    }
    printf("bilangan yang frekuensinya lebih dari satu: \n");
    for (i = 0; i < N; i++){
        jumlah = 1;
        for (j = i+1; j < N; j++) {
            if (T[i] == T[j]) {
                jumlah++;
                T[j] = 0; 
            }
        }
        if (jumlah > 1 && T[i] != 0) {
            printf("%d\n",T[i]);
        }
    }
    free(T);
    return 0;
}
