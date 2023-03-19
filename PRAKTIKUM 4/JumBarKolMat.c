/*
Nama Program  : JumBarKolMat
Deskripsi     : Menentukan jumlah baris dan kolom 
Nama Pembuat  : Azzam Saefudin Rosyidi
NIM           : 24060122130076
Tanggal       : 18 Maret 2023
*/
#include<stdlib.h>
#include <stdio.h>

int main(void){

    //kamus lokal
    int i,j; //iterator
    int N; //panjang tabel M (Baris)
    int M; //panjang tabel N (Kolom)
    int **T; //Tabel dengan 2 dimensi M dan N
    int jumBaris; //untuk menjumlahkan baris
    int jumKolom; //untuk menjumlahkan kolom
   

    //algoritma
   
    printf("masukkan ukuran(M dan N) :\n");
    scanf("%d %d", &M,&N);

    T = (int**)malloc(M*sizeof(int));
    for ( i = 0; i < M; i++){
        T[i] = (int*)malloc(N*sizeof(int));
    }
    printf("masukkan bilangan integernya:\n");
    for ( i = 0; i < M; i++){
        for ( j = 0; j < N; j++){
            scanf("%d",&T[i][j]);
        }
    }for ( i = 0; i < M; i++){
        jumBaris=0;
        for ( j = 0; j < N; j++){
            jumBaris+=T[i][j];
        }
        printf("baris ke-%d adalah %d\n",i+1,jumBaris);
    }for ( i = 0; i < M; i++){
        jumKolom=0;
        for ( j = 0; j < N; j++){
            jumKolom+=T[j][i];
        }
        printf("kolom ke-%d adalah %d\n",j+1,jumKolom);
    }
    for (i = 0; i < M; i++) {
        free(T[i]);
    }
    free(T);
    return 0;
}
