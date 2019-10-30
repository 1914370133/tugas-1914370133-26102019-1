#include <stdio.h>
#include <conio.h>

int main()
{

    printf("                      Nama  : Muhammad Aqhsal Raihan Lubis\n");
    printf("                      NPM   : 1914370133\n");
    printf("                      Kelas : Reguler 1D\n");

    char NPM [100], Nama[100];
    int UTS,UAS;
    float Akhir;
    printf("Masukan NPM anda:");
    scanf("%s",NPM);
    printf("Masukan Nama anda:");
    scanf("%s",Nama);
    printf("Masukan Nilai UTS.");
    scanf("%d",&UTS);
    printf("Masukan Nilai UAS.");
    scanf("%d",&UAS);
    if(UTS>70){
        printf("Anda Lulus");
    }else{
    Akhir=UTS*0.4f + UAS*0.6f;
    printf("Nilai akhir Anda :%f\n",Akhir);
    if(Akhir>=60){
        printf("Anda Lulus");
    }else{
         printf("Anda Tidak Lulus");

    }

       }

    return 0;
    }

