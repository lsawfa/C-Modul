//PROGRAM KALKULATOR SEDERHANA
//202110370311189-LARYNT SAWFA KENANGA
#include <stdio.h>

int kali, kali2;
float bagi, bagi2;

//Fungsi penjumlahan dengan formal parameternya menggunakan pointer
int penjumlahan(int* a, int* b, int* c){
    return (*a) + (*b) + (*c);
}
//Fungsi pengurangan
int pengurangan(int a, int b, int c){
    return (a - b - c);
}
//Fungsi perkalian 3 angka dengan return typenya menggunakan pointer
int* perkalian(int a, int b, int c){
    kali = a * b * c;
    return (&kali);
}
//Fungsi perkalian 2 angka dengan return typenya menggunakan pointer
int* perkalian2(int a, int b){
    kali2 = a * b;
    return (&kali2);
}
//Fungsi pembagian 2 angka dengan return typenya menggunakan pointer
float* pembagian(float a, float b){
    bagi = a / b;
    return (&bagi);
}
//Fungsi pembagian 3 angka dengan return typenya menggunakan pointer
float* pembagian2(float a, float b, float c){
    bagi2 = a / b / c;
    return (&bagi2);
}

int main()
{
    //Deklarasi variabel
    int menu, bil1, bil2, bil3, lanjut, banyak;
    float bilangan1, bilangan2, bilangan3;
    //Perulangan do-while agar bisa menghitungan suatu operasi secara berulang-ulang dalam 1 program
    do{
        //Tampilan menu kalkulator
        printf("------------------------------\n");
        printf("-PROGRAM KALKULATOR SEDERHANA-\n");
        printf("------------------------------\n");
        printf("-    Nomor    -   Menu       -\n");
        printf("------------------------------\n");
        printf("-      1      -   Penjumlahan-\n");
        printf("-      2      -   Pengurangan-\n");
        printf("-      3      -   Perkalian  -\n");
        printf("-      4      -   Pembagian  -\n");
        printf("------------------------------\n");
        //Input bilangan yang akan dihitung
        printf("Pilih Menu: ");
        scanf("%i", &menu);

        //Statement if-else if-else
        if(menu==1){
            printf("Menu Penjumlahan\n");
            printf("Masukkan bilangan 1 (jika tidak ada, inputkan angka 0) : ");
            scanf("%i", &bil1);
            printf("Masukkan bilangan 2 (jika tidak ada, inputkan angka 0) : ");
            scanf("%i", &bil2);
            printf("Masukkan bilangan 3 (jika tidak ada, inputkan angka 0) : ");
            scanf("%i", &bil3);
            printf("------------------------------\n");
            printf("%i+%i+%i=%i\n", bil1, bil2, bil3, penjumlahan(&bil1, &bil2, &bil3));
            printf("Jadi hasil penjumlahan adalah %i\n", penjumlahan(&bil1, &bil2, &bil3));
        }else if(menu==2){
            printf("Menu Pengurangan\n");
            //Memanggil fungsi dengan mendeklarasikan pointer
            int (*fungsi)(int, int, int) = pengurangan;
            printf("Masukkan bilangan 1 (jika tidak ada, inputkan angka 0) : ");
            scanf("%i", &bil1);
            printf("Masukkan bilangan 2 (jika tidak ada, inputkan angka 0) : ");
            scanf("%i", &bil2);
            printf("Masukkan bilangan 3 (jika tidak ada, inputkan angka 0) : ");
            scanf("%i", &bil3);
            printf("------------------------------\n");
            printf("%i-%i-%i=%i\n", bil1, bil2, bil3, fungsi(bil1, bil2, bil3));
            printf("Jadi hasil pengurangan adalah %i\n", fungsi(bil1, bil2, bil3));
        }else if(menu==3){
            printf("Menu Perkalian\n");
            printf("Banyaknya bilangan yang akan dikalikan ? ");
            scanf("%i", &banyak);
            if(banyak==2){
                printf("Masukkan bilangan 1 : ");
                scanf("%i", &bil1);
                printf("Masukkan bilangan 2 : ");
                scanf("%i", &bil2);
                printf("%ix%i=%i\n", bil1, bil2, *(perkalian2(bil1, bil2)));
                printf("Jadi hasil perkalian adalah %i\n", *(perkalian2(bil1, bil2)));
            }else if(banyak==3){
                printf("Masukkan bilangan 1 : ");
                scanf("%i", &bil1);
                printf("Masukkan bilangan 2 : ");
                scanf("%i", &bil2);
                printf("Masukkan bilangan 3 : ");
                scanf("%i", &bil3);
                printf("%ix%ix%i=%i\n", bil1, bil2, bil3, *(perkalian(bil1, bil2, bil3)));
                printf("Jadi hasil perkalian adalah %i\n", *(perkalian(bil1, bil2, bil3)));
            }
        }else if(menu==4){
            printf("Menu Pembagian\n");
            printf("Banyaknya bilangan yang akan dibagikan ? ");
            scanf("%i", &banyak);
            if(banyak==2){
                printf("Masukkan bilangan 1 : ");
                scanf("%f", &bilangan1);
                printf("Masukkan bilangan 2 : ");
                scanf("%f", &bilangan2);
                if(bilangan2==0.0){
                    printf("Error: penyebut tidak boleh 0\n");
                }else{
                    printf("%.2f:%.2f=%.2f\n", bilangan1, bilangan2, *(pembagian(bilangan1, bilangan2)));
                    printf("Jadi hasil pembagian adalah %.2f\n", *(pembagian(bilangan1, bilangan2)));
                }
            }else if(banyak==3){
                printf("Masukkan bilangan 1 : ");
                scanf("%f", &bilangan1);
                printf("Masukkan bilangan 2 : ");
                scanf("%f", &bilangan2);
                printf("Masukkan bilangan 3 : ");
                scanf("%f", &bilangan3);
                if(bilangan2==0.0||bilangan3==0.0){
                    printf("Error: penyebut tidak boleh 0\n");
                }else{
                    printf("%.2f:%.2f:%.2f=%.2f\n", bilangan1, bilangan2, bilangan3, *(pembagian2(bilangan1, bilangan2, bilangan3)));
                    printf("Jadi hasil pembagian adalah %.2f\n", *(pembagian2(bilangan1, bilangan2, bilangan3)));
                }
            }
        }else{
            printf("Menu tidak ditemukan\n");
        }
        printf("------------------------------\n");
        printf("Lanjut (y=1) ? ");
        scanf("%i", &lanjut);
    }while(lanjut==1);
    return 0;
}
