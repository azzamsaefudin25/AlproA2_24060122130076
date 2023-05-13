/*
Nama Program  : SEQSearchX1
Deskripsi     : Mencari harga X dalam tabel T secara sekuensial
Nama Pembuat  : Azzam Saefudin Rosyidi
NIM           : 24060122130076
Tanggal       : 10 Mei 2023
*/

#include <stdio.h>
#include <stdbool.h>

int main(void){

    //kamus lokal
    int Tabel[8] = {1,3,5,-8,12,90,3,5};
    int N=8;
    int IX;
    int P;

    //algoritma
    printf("Masukkan nilai yang ingin dicari: ");
    scanf("%d", &IX); 

    P = sequentialSearch(Tabel,N,IX);

    if (P!= -1){ 
        printf("Data %d ditemukan pada indeks ke-%d.\n",IX, P);
    }
    else{
        printf("Data %d tidak ditemukan.\n", IX);
    }
    return 0;
}

int sequentialSearch(int T[], int N, int IX){

    //kamus lokal

    int i=0;
    bool found = false;

    //algoritma
    while (i < N && !found){ 
        if (T[i] == IX){
            found = true; 
        }else{
            i++; 
        }
    }
    if (found==true){
        return i;
    }else{
        return -1;
    }
}