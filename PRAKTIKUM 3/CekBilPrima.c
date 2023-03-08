/*
Nama Program  : CekBilPrima
Deskripsi     : Menentukan faktor bilangan dari sebua bilangan integer sembarang
Nama Pembuat  : Azzam Saefudin Rosyidi
NIM           : 24060122130076
Tanggal       : 7 Maret 2023
*/

#include <stdio.h>

int main(void){

    //kamus lokal    
    int N; //Bilangan integer positif sembarang 
    int i; //(counter)
    int jumlah;
    //algoritma
    printf("masukkan input: ");
    scanf("%d", &N);
    jumlah=0;
    if (N<=0){
        printf("N harus positif");
    }
    else{
        for ( i = 1; i <= N; i++){
            if (N % i == 0){
                jumlah++;
            } 
        }if(jumlah==2){
            printf("%d adalah bilangan prima\n", N);
        }else{
            printf("%d bukan bilangan prima\n", N);
        }
    }
    return 0;
}