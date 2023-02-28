/*
Nama Program  : JarakGLBB
Deskripsi     : Menghitung dan menampilkan jarak GLBB
Nama Pembuat  : Azzam Saefudin Rosyidi
NIM           : 24060122130076
Tanggal       : 21 Februari 2023
*/
#include <stdio.h>

int main(){
    // kamus lokal
    /*kamus lokal berisikan tipe data yang ingin dimasukkan */
    float s; // jarak
    float vo; // kecepatan awal
    float t; // waktu
    float a; // percepatan

    // Algoritma
    // Masukkan rumus

    printf("Masukkan nilai input: ");
    scanf("%f %f %f",&vo,&t,&a);
    s = vo * t + 0.5*(a*(t*t));
    printf("Hasil dari s adalah %.4f",s);
    return 0;
}