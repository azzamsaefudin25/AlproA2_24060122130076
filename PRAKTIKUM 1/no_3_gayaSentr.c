/*
Nama Program  : GayaSentripetal
Deskripsi     : Menghitung dan menampilkan gaya sentripetal
Nama Pembuat  : Azzam Saefudin Rosyidi
NIM           : 24060122130076
Tanggal       : 23 Februari 2023
*/
#include <stdio.h>

int main(){
    // kamus lokal
    
    float F; // merupakan gaya sentripetal
    float m; // merupakan massa
    float v; // merupakan kecepatan
    float r; // merupakan jari-jari

    // Algoritma
    // rumus

    printf("Masukkan nilai input: ");
    scanf("%f %f %f",&m,&v,&r);
    F = m*((v*v)/r);
    printf("Hasil dari F adalah %.4f",F);
    return 0;
}