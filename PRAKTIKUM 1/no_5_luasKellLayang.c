/*
Nama Program  : Luas Keliling Layang
Deskripsi     : Menghitung dan menampilkan luas dan keliling layang-layang
Nama Pembuat  : Azzam Saefudin Rosyidi
NIM           : 24060122130076
Tanggal       : 23 Februari 2023
*/
#include <stdio.h>

int main(){
    // kamus lokal
   
    float s1; // merupakan sisi 1
    float s2; // merupakan sisi 2
    float d1; // merupakan diagonal 1
    float d2; // merupakan diagonal 2
    float luas; // merupakan luas layang-layang
    float kell; // merupakan keliling layang-layang

    // Algoritma
    // rumus

    printf("Masukkan nilai input: ");
    scanf("%f %f %f %f",&d1,&d2,&s1,&s2);
    luas = (d1*d2)/2;
    kell = 2*(s1+s2);
    printf("Hasil dari luas adalah %.4f\n",luas);
    printf("Hasil dari kell adalah %.4f",kell);
    return 0;
}