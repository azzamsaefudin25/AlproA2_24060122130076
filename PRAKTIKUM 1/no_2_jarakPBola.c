/*
Nama Program  : JarakPBola
Deskripsi     : Menghitung dan menampilkan jarak Parabola
Nama Pembuat  : Azzam Saefudin Rosyidi
NIM           : 24060122130076
Tanggal       : 21 Februari 2023
*/
#include <stdio.h>

int main(){
    // kamus lokal
    
    float y; // merupakan jarak
    float vo; // merupakan kecepatan awal
    float t; // merupakan waktu
    float g; // merupakan percepatan gravitasi

    // Algoritma
    // rumus

    printf("Masukkan nilai input: ");
    scanf("%f %f %f",&vo,&t,&g);
    y = vo * t - 0.5*(g*(t*t));
    printf("Hasil dari y adalah %.4f",y);
    return 0;
}