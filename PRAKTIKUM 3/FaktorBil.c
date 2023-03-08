/*
Nama Program  : FaktorBil
Deskripsi     : Menentukan faktor bilangan dari sebua bilangan integer sembarang
Nama Pembuat  : Azzam Saefudin Rosyidi
NIM           : 24060122130076
Tanggal       : 3 Maret 2023
*/

#include <stdio.h>

int main(void){

    //kamus lokal    
    int N; //Bilangan integer positif sembarang 
    int i; //(counter)
   
    //algoritma
    printf("masukkan input: ");
    scanf("%d", &N);
    if (N<=0){
        printf("masukan N harus positif");
    }
    else {
        for ( i = 1; i <= N; i++){
            if (N % i == 0){
                printf("%d", i);
                printf("\n");
            }     
        }   
    }
    return 0;

}