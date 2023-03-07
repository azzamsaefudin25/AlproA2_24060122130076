/*
Nama Program  : CekNamaHari
Deskripsi     : Menentukan nama-nama hari dari nomor hari 
Nama Pembuat  : Azzam Saefudin Rosyidi
NIM           : 24060122130076
Tanggal       : 28 Februari 2023
*/
#include <stdio.h>

int main(void){
    
    //kamus lokal
    int h; //input nomor hari

    //algoritma
    printf("masukkan input: ");
    scanf("%d", &h);
    if (h >=1 && h<=7){
        switch (h)
        {
        case 1 :
            printf("Hari Senin");
            break;
        case 2 :
            printf("Hari Selasa");
            break;
        case 3 :
            printf("Hari Rabu");
            break;
        case 4 :
            printf("Hari Kamis");
            break;
        case 5 :
            printf("Hari Jumat");
            break;
        case 6 :
            printf("Hari Sabtu");
            break;
        default:
            printf("Hari Minggu");   
            break;
    }}
    else{
        printf("Masukan nomor hari tidak tepat");
    }
}