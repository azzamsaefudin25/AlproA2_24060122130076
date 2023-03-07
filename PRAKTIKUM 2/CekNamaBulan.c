/*
Nama Program  : CekNamaBulan
Deskripsi     : Menentukan nama-nama hari bulan dari nomor bulan.
Nama Pembuat  : Azzam Saefudin Rosyidi
NIM           : 24060122130076
Tanggal       : 28 Februari 2023
*/
#include <stdio.h>

int main(void){
    
    //kamus lokal
    int b; //input nomor bulan

    //algoritma
    printf("masukkan input: ");
    scanf("%d", &b);
    if (b >=1 && b<=12){
        switch (b)
        {
        case 1 :
            printf("Bulan Januari");
            break;
        case 2 :
            printf("Bulan Februari");
            break;
        case 3 :
            printf("Bulan Maret");
            break;
        case 4 :
            printf("Bulan April");
            break;
        case 5 :
            printf("Bulan Mei");
            break;
        case 6 :
            printf("Bulan Juni");
            break;
        case 7 :
            printf("Bulan Juli");
            break;
        case 8 :
            printf("Bulan Agustus");
            break;
        case 9 :
            printf("Bulan September");
            break;
        case 10 :
            printf("Bulan Oktober");
            break;
        case 11 :
            printf("Bulan November");
            break;
        default:
            printf("Bulan Desember");   
            break;
    }}
    else{
        printf("Masukan nomor Bulan tidak tepat");
    }
}