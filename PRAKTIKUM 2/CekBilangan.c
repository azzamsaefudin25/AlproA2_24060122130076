/*
Nama Program  : CekBilangan
Deskripsi     : Klasifikasi bilangan bulat positif atau nol atau bulat negative atau Bukan termasuk sebuah bilangan.
Nama Pembuat  : Azzam Saefudin Rosyidi
NIM           : 24060122130076
Tanggal       : 28 Februari 2023
*/
#include <stdio.h>

int main(void){
    // kamus lokal
    int i; //nilai yang dibaca

    // algoritma
    printf("masukkan input: ");
    if (scanf("%d", &i)){
        if (i >= 1){
            printf("bilangan bulat positif"); 
        }else if (i == 0){
            printf("bilangan nol");
        }else if (i <= -1){
            printf("bilangan bulat negatif");}
    }else{
        printf("bukan termasuk sebuah bilangan");
    }
    return 0;    
}
