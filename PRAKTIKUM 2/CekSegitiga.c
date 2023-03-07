/*
Nama Program  : CekSegitiga
Deskripsi     : Mengecek sisi-sisi segitiga dan menampilkan jenis segitiga
Nama Pembuat  : Azzam Saefudin Rosyidi
NIM           : 24060122130076
Tanggal       : 28 Februari 2023
*/
#include <stdio.h>

int main(void){
    // kamus lokal
    int a; //sisi 1
    int b; //sisi 2
    int c; //sisi 3

    // algoritma
    printf("masukkan input: ");
    scanf("%d %d %d",&a, &b, &c);

    if (a>0 && b>0 && c>0){
        if (a==b & b==c & c==a){
            printf("Segitiga Sama Sisi");
        }else if ((a==b || b==c || c==a)){
            printf("Segitiga Sama Saki");
        }else{
            printf("Segitiga Sembarang");}
    }else{
        printf("Terdapat nilai yang bukan sisi segitiga");
    }
    return 0;

}