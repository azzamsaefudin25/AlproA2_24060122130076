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
    int A; //masukan 1 bilangan bulat
    int B; //masukan 2 bilangan bulat
    int a; // hasil dari A + B
    int b; // hasil dari A - B
    int c; // hasil dari A * B
    float d; // hasil dari A / B
    int e; // hasil A dari div B
    int f; // hasil A dari mod B
    char pilihan;

    // algoritma
    printf("masukkan input: ");
    scanf("%d %d %c",&A,&B,&pilihan);
    if (pilihan=='a'){
        a = A + B;
        printf("hasil a : %d\n",a);
    }else if (pilihan=='b'){
        b = A - B;
        printf("hasil b : %d\n",b);
    }else if (pilihan=='c'){
        c = A * B;
        printf("hasil c : %d\n",c);
    }else if (pilihan=='d'){
        d = (float) A / B;
        printf("hasil d : %.4f\n",d);
    }else if (pilihan=='e'){
        e = A / B;
        printf("hasil e : %d\n",e);
    }else if (pilihan=='f'){
        f = A % B;
        printf("hasil f : %d\n",f);}
    else{
        printf("Bukan pilihan menu yang benar\n");}
    
    return 0;

}