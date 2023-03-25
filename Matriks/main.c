//189 - Larynt Sawfa Kenanga
//Program mencari nilai maksimum dan minimum dari matriks

#include <stdio.h>

void main(void){
    int ordo;
    int matrixdua[2][2];
    int matrixtiga[3][3];
    int biggest, smallest;

    printf("Pilih ordo matrix, 2x2 maka 2 atau 3x3 maka 3: ");
    scanf("%i", &ordo);

    if(ordo==2){
        printf("Masukkan angka dalam matrix : \n");
        //Perulangan untuk input
        for(int i=0; i<2; i++){
            for(int j=0; j<2; j++){
                printf("Masukkan angka pada index [%i][%i] : ", i, j);
                scanf("%i", &matrixdua[i][j]);
            }
        }
        printf("\nHasilnya adalah: \n%i    %i\n%i    %i", matrixdua[0][0], matrixdua[0][1], matrixdua[1][0], matrixdua[1][1]);

        biggest=matrixdua[0][0];
        smallest=matrixdua[0][0];
        for(int i=0; i<2; i++){
            for(int j=0; j<2; j++){
                if(matrixdua[i][j]>=biggest){
                    biggest=matrixdua[i][j];
                }else if(matrixdua[i][j]<=smallest){
                    smallest=matrixdua[i][j];
                }
            }
        }
        printf("\nSmallest : %i   Biggest : %i\n", smallest, biggest);
    }else if(ordo==3){
        printf("Masukkan angka dalam matrix : \n");
        //Perulangan untuk input
        for(int i=0; i<3; i++){
            for(int j=0; j<3; j++){
                printf("Masukkan angka pada index [%i][%i] : ", i, j);
                scanf("%i", &matrixtiga[i][j]);
            }
        }
        printf("\nHasilnya adalah: \n%i    %i    %i\n%i    %i    %i\n%i    %i    %i\n", matrixtiga[0][0], matrixtiga[0][1], matrixtiga[0][2], matrixtiga[1][0], matrixtiga[1][1], matrixtiga[1][2], matrixtiga[2][0], matrixtiga[2][1], matrixtiga[2][2]);

        biggest=matrixtiga[0][0];
        smallest=matrixtiga[0][0];
        for(int i=0; i<3; i++){
            for(int j=0; j<3; j++){
                if(matrixtiga[i][j]>=biggest){
                    biggest=matrixtiga[i][j];
                }else if(matrixtiga[i][j]<=smallest){
                    smallest=matrixtiga[i][j];
                }
            }
        }
        printf("\nSmallest : %i   Biggest : %i\n", smallest, biggest);
    }
    return 0;
}
