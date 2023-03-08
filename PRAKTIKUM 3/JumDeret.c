/*
Nama Program  : JumDeret
Deskripsi     : Menghitung total jumlah deret bilangan
Nama Pembuat  : Azzam Saefudin Rosyidi
NIM           : 24060122130076
Tanggal       : 3 Maret 2023
*/

#include <stdio.h>

int main(void){

    //kamus lokal
    int N; //(Banyak bilangan)
    int i; //(counter)
    int total;
    //algoritma
    printf("masukkan input: ");
    scanf("%d", &N);
    if (N<=0){
        printf("N harus positif");
    }else{
        total=0;
        for(i=1; i<=N; i++){
            total += i;
    } 
    printf("Jumlah total deret: %d\n ", total);
    }    
    return 0;

}