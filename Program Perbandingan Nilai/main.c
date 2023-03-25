//189 - Larynt Sawfa Kenanga
//Program membandingkan nilai
#include <stdio.h>

void main(void)
{
    int nilaiBoruto[3]={85, 90, 86};
    int nilaiSarada[3]={84, 90, 89};

    printf("Nilai Boruto: \n");
    //perulangan untuk menampilkan nilai Boruto
    for(int i=1; i<=3; i++){
        printf("Ujian progdas ke-%i : %i\n", i, nilaiBoruto[i-1]);
    }

    printf("Nilai Sarada: \n");
    //perulangan untuk menampilkan nilai Sarada
    for(int i=1; i<=3; i++){
        printf("Ujian progdas ke-%i : %i\n", i, nilaiSarada[i-1]);
    }

    printf("\nRekap perbandingan nilai Boruto dan Sarada: \n");
    for(int i=1; i<=3; i++){
        //statement if-else untuk membandingkan nilai
        if(nilaiBoruto[i-1]>nilaiSarada[i-1]){
            printf("Hasilnya: 1\n");
        }else{
            printf("Hasilnya: 0\n");
        }
    }
    return 0;
}
