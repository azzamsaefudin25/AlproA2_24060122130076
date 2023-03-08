/*
Nama Program  : BilSempN
Deskripsi     : Mencetak bilangan sempurna sampai dengan bilangan N
Nama Pembuat  : Azzam Saefudin Rosyidi
NIM           : 24060122130076
Tanggal       : 7 Maret 2023
*/

#include <stdio.h>

int main(void){

    //kamus lokal    
    int N; //Bilangan integer positif sembarang 
    int i; //counter
    int j; //counter
    int jumlah;
    //algoritma
    printf("masukkan input: ");
    scanf("%d", &N);

    if (N<=0){
        printf("N harus positif");
    }
    else{ 
        for ( i = 1; i < N; i++){
            jumlah=0;
            for ( j = 1; j < i; j++){
                if (i % j == 0){
                    jumlah+=j;
                }
            }if (jumlah==i){
            printf("%d\n", i);
            }
        }
    }
    return 0;
}