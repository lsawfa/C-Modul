//Program Kasir Warung Sederhana

#include <stdio.h>

void main(void){
    //deklarasi variabel
    char menu1[10]="Kebab", menu2[10]="Burger", menu3[10]="Ice Tea";
    int jumlahmenu=0, kodemenu=0, qty=0, lanjut;
    float hk= 15000.00, hb=20000.00, hi=5000.00, totalharga1=0, totalharga2=0, totalharga3=0, tunai=0;

    printf("=========== Warung Makan ===========\n\n");
    //looping do while
    do{
        printf("Menu\n");
        printf("====================================\n");
        printf("= Kode menu - Nama Menu - Harga    =\n");
        printf("=----------------------------------=\n");
        printf("=     1     - Kebab     - Rp15.000 =\n");
        printf("=     2     - Burger    - Rp20.000 =\n");
        printf("=     3     - Ice Tea   - Rp5.000  =\n");
        printf("====================================\n");

        printf("Silahkan pilih jumlah jenis menu yang dipesan: ");
        scanf("%i", &jumlahmenu);
        printf("====================================\n");
        //looping for
        for(int i=1; i<=jumlahmenu; i++){
            printf("Menu ke-%i          : ", i);
            scanf("%i", &kodemenu);
            //percabangan if-else if-else
            if(kodemenu==1){
                printf("Anda telah memilih menu %s\n", menu1);
                printf("------------------------------------\n");
                printf("Banyaknya pesanan   : ");
                scanf("%i", &qty);
                printf("Qty                 : %i %s\n", qty, menu1);
                printf("------------------------------------\n");
                totalharga1 = qty * hk;
                printf("Total harga         : %.2f\n", totalharga1);
                printf("====================================\n");
            }else if(kodemenu==2){
                printf("Anda telah memilih menu %s\n", menu2);
                printf("------------------------------------\n");
                printf("Banyaknya pesanan   : ");
                scanf("%i", &qty);
                printf("Qty                 : %i %s\n", qty, menu2);
                printf("------------------------------------\n");
                totalharga2 = qty * hb;
                printf("Total harga         :%.2f\n", totalharga2);
                printf("====================================\n");
            }else if(kodemenu==3){
                printf("Anda telah memilih menu %s\n", menu3);
                printf("------------------------------------\n");
                printf("Banyaknya pesanan   : ");
                scanf("%i", &qty);
                printf("Qty                 : %i %s\n", qty, menu3);
                printf("------------------------------------\n");
                totalharga3 = qty * hi;
                printf("Total harga         : %.2f\n", totalharga3);
                printf("====================================\n");
            }else{
                printf("Maaf menu tidak tersedia\n");
                printf("====================================\n");
            }
    }

    printf("Grand Total         : %.2f\n", totalharga1+totalharga2+totalharga3);
    printf("Tunai               : ");
    scanf("%f", &tunai);
    //percabangan if-else
    if(tunai >= totalharga1+totalharga2+totalharga3){
        printf("Kembali             : %.2f\n\n", tunai-totalharga1-totalharga2-totalharga3);
    }else{
        printf("Maaf uang anda tidak cukup\n\n");
        break;
    }

    printf("Apakah anda ingin memesan lagi?(yes=1): ");
    scanf("%i", &lanjut);

    }while(lanjut == 1);
    printf("SELESAI");

    return 0;
}
