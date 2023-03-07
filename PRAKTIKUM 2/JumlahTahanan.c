/*
Nama Program  : JumlahTahanan
Deskripsi     : Menentukan total jumlah tahanan 1, tahanan 2, dan tahanan 3
Nama Pembuat  : Azzam Saefudin Rosyidi
NIM           : 24060122130076
Tanggal       : 28 Februari 2023
*/
#include <stdio.h>

int main(void){
    // kamus lokal
    int a; //tahanan 1
    int b; //tahanan 2
    int c; //tahanan 3
    int total; // total jumlah tahanan

    // algoritma
    printf("masukkan input: ");
    scanf("%d %d %d",&a,&b,&c);
    //if (scanf("%d %d %d",&a,&b,&c)){
    if (a>=0 && b>=0 && c>=0){
        total = a + b + c;
        printf("totalnya adalah %.d",total);}
    else{
        printf("Masukan tahanan tidak boleh negatif");}
    return 0;
}