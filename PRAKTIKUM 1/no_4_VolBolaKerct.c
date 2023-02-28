/*
Nama Program  : Volume Bola Kerucut
Deskripsi     : Menghitung dan menampilkan volume bola dan volume kerucut
Nama Pembuat  : Azzam Saefudin Rosyidi
NIM           : 24060122130076
Tanggal       : 23 Februari 2023
*/
#include <stdio.h>

int main(){
    // kamus lokal
   
    const double phi = 3.1415;
    float Vb; // merupakan volume bola 
    float Vk; // merupakan volume kerucut
    float r; // merupakan jari-jari

    // Algoritma
    // rumus

    printf("Masukkan nilai input: ");
    scanf("%f",&r);
    Vb = 4*((phi*(r*r*r))/3);
    Vk = Vb/2;
    printf("Hasil dari Vb adalah %.4f\n",Vb);
    printf("Hasil dari Vk adalah %.4f",Vk);
    return 0;
}