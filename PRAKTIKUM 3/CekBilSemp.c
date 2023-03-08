/*
Nama Program  : CekBilSemp
Deskripsi     : Menentukan sebuah masukan apakah bilangan sempurna atau bukan
Nama Pembuat  : Azzam Saefudin Rosyidi
NIM           : 24060122130076
Tanggal       : 7 Maret 2023
*/
#include <stdio.h>

int main(void){

    //kamus
    int N; //masukan bilangan 
    int i; //counter
    int jumlah;

    printf("Masukkan input: ");
    scanf("%d", &N);

    jumlah = 0;
    if (N<=0) {
        printf("N harus positif");
    }else{
        for (i = 1; i < N; i++){
            if (N % i == 0){
                jumlah+=i;}
        }if (jumlah==N){
            printf("%d adalah bilangan sempurna\n", N);
        }else{
            printf("%d bukan bilangan sempurna\n", N);
        }
        
    }
    return 0;
}