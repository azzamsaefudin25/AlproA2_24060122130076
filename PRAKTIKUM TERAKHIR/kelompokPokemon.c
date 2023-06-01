/*Nama File     : kelompokPokemon.c*/
/*Deskripsi     : Mengelompokkan power berdasarkan kelompok power huruf terentu dan dioutputkan dalam file yang berbeda*/
/*Pembuat       : Azzam Saefudin Rosyidi_24060122130076*/
/*Tanggal       : 1 Juni 2023*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct { 
    char nama[255][255];
    int power;
} pokemon;

/*Program Utama*/
int main(void)
{

    // kamus lokal
    pokemon POK;
    int retval;

    FILE *myFILE, *sClass, *aClass;

    myFILE = fopen("rekapPokemon.txt", "r");
    sClass = fopen("pokemon S_class.txt", "w");
    aClass = fopen("pokemon A_class.txt", "w");

    // algoritma
    if (!myFILE)
    {
        printf("File tidak ditemukan");
    }
    else
    {
        fprintf(sClass, "List pokemon dengan predikat Sclass\n");
        fprintf(aClass, "List pokemon dengan predikat Aclass\n");
        retval = fscanf(myFILE, "%s %d", &POK.nama, &POK.power);
        while (retval != EOF)
        {
            if (POK.power >= 800)
            {
                fprintf(sClass, "%s %d\n", POK.nama, POK.power);
            }
            else
            {
                fprintf(aClass, "%s %d\n", POK.nama, POK.power);
            }
            retval = fscanf(myFILE, "%s %d\n", &POK.nama, &POK.power);
        }
        printf("Power berhasil dikelompokkan");
        fclose(myFILE);
    }
    return 0;
}