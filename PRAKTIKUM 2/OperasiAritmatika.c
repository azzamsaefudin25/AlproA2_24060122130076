/*
Nama Program  : OperasiAritmatika
Deskripsi     : Menghitung dan menampilkan beberapa hasil operasi aritmatika dari dua buah bilangan bulat
Nama Pembuat  : Azzam Saefudin Rosyidi
NIM           : 24060122130076
Tanggal       : 1 Maret 2023
*/
#include <stdio.h>

int main(void){

    // kamus lokal
    int iA; //masukan 1 bilangan bulat
    int iB; //masukan 2 bilangan bulat
    int a; // hasil dari iA + iB
    int b; // hasil dari iA - iB
    int c; // hasil dari iA * iB
    float d; // hasil dari iA / iB
    int e; // hasil dari iA div iB
    int f; // hasil dari iA mod iB
    char pilihan;

    // algoritma
    printf("masukkan input: ");
    scanf("%d %d %c",&iA,&iB,&pilihan);
    if (pilihan=='a'||pilihan=='b'||pilihan=='c'||pilihan=='d'||pilihan=='e'||pilihan=='f'){
        if (pilihan=='a'){
            a = iA + iB;
            printf("hasil a : %d\n",a);
        }else if (pilihan=='b'){
            b = iA - iB;
            printf("hasil b : %d\n",b);
        }else if (pilihan=='c'){
            c = iA * iB;
            printf("hasil c : %d\n",c);
        }else if (pilihan=='d'){
            d = (float) iA / iB;
            printf("hasil d : %.4f\n",d);
        }else if (pilihan=='e'){
            e = iA / iB;
            printf("hasil e : %d\n",e);
        }else if (pilihan=='f'){
            f = iA % iB;
            printf("hasil f : %d\n",f);}
    }else{
        printf("Bukan pilihan menu yang benar\n");}
    
    return 0;

}