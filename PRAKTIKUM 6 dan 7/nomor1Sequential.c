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
    int T[8] = {1,3,5,-8,12,90,3,5};
    int IX;                  
    int i = 0;
    bool found = false; 

    //algoritma
    printf("Masukkan nilai yang ingin dicari: ");
    scanf("%d", &IX); 
    
    while (i < 8 && !found){ 
        if (T[i] == IX){
            found = true; 
        }else{
            i++; 
        }
    }
    if (found){ 
        printf("Data %d ditemukan pada indeks ke-%d.\n",IX, i);
    }
    else{
        printf("Data %d tidak found.\n", IX);
    }

    //return 0;
}
