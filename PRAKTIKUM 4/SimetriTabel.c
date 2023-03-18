/*
Nama Program  : SimetriTabel
Deskripsi     : Menentukan T1 dan T2 simetri atau tidak
Nama Pembuat  : Azzam Saefudin Rosyidi
NIM           : 24060122130076
Tanggal       : 18 Maret 2023
*/

#include<stdlib.h>
#include <stdio.h>
#include <stdbool.h>

int main(void) {

    //kamus lokal
    int i; //iterator
    int N1,N2; //panjang tabel
    bool simetri; //Check simetri
    int *T1; // tabel dengan panjang N1
    int *T2; //tabel dengan panjang N2

    //algoritma
    printf("masukkan total elemen N1 dan N2 : ");
    scanf("%d %d", &N1, &N2);

    T1 = (int*)malloc(N1*sizeof(int));
    printf("masukkan %d bilangan integer N1:\n", N1);
    T2 = (int*)malloc(N2*sizeof(int));
    printf("masukkan %d bilangan integer N2:\n", N2);
    
    for ( i = 0; i < N1; i++){
        scanf("%d", &T1[i]);
    }for ( i = 0; i < N2; i++){
        scanf("%d", &T2[i]);
    }if (N1==N2){
        for ( i = 0; i < N1; i++){
            if (T1[i]==T2[i]){
                simetri = true;
            }else{
                simetri = false;
            }
        }if (simetri==true){
            printf("Simetri");
        }else{
            printf("Tidak Simetri");
        } 
    }else{
        printf("Tidak Simetri");
    }
    free(T1);
    free(T2);
    return 0;  
}