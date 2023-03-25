//Nama: Larynt Sawfa Kenanga
//Kelas: D-Informatika
//NIM: 202110370311189
#include <stdio.h>
#include <math.h>

void main()
{
    int tahun[6], a[6];
    int sumtahun;
    float y[6], b[6], c[6];
    y[0]=850.0;
    y[1]=880.0;
    y[2]=875.0;
    y[3]=889.0;
    y[4]=900.0;
    y[5]=950.00;
    y[6]=1100.00;
    float sumy, averagex, averagey, b1, b2, d, f;
    printf("=== PROGRAM MEMPREDIKSI HARGA JUAL EMAS RATA-RATA PER TAHUNNYA YANG ADA DI INDONESIA ===\n\n");
    printf("DATA NILAI JUAL EMAS\n");
    printf("-----------------------------------------\n");
    printf("\nTahun   Nilai Jual Emas/gram\n2015   Rp 850,000\n2016   Rp 880,000\n2017   Rp 875,000\n2018   Rp 889,000\n2019   Rp 900,000\n2020   Rp 950,000\n2021   Rp 1,100,000");
    printf("\n-----------------------------------------\n");
    for(int i=0; i<7; i++){
        tahun[i]=2015+i;
    }
    for(int i=0; i<7; i++){
        sumtahun=sumtahun+tahun[i];
        sumy=sumy+y[i];
    }
    averagex=sumtahun/7.0;
    averagey=sumy/7.0;
    for(int i=0; i<7; i++){
        a[i]=(tahun[i]-averagex)*(y[i]-averagey);
        d=d+a[i];
    }
    f = pow(tahun[0]-averagex, 2.0)+pow(tahun[1]-averagex, 2.0)+pow(tahun[2]-averagex, 2.0)+pow(tahun[3]-averagex, 2.0)+pow(tahun[4]-averagex, 2.0)+pow(tahun[5]-averagex, 2.0)+pow(tahun[6]-averagex, 2.0);
    b1=(d)/f;
    b2=averagey-(b1*averagex);
    printf("%.2f", b2);

    printf("Persamaan garis (y=b0+b1x): \ny=%.2f + %.2fx\n", b2, b1);
    printf("Nilai harga jual Emas tahun 2025 = Rp %.2f\n", b2+(b1*2025.0));
    printf("Nilai harga jual Emas tahun 2020 = Rp %.2f", b2+(b1*2030.0));
    return 0;
}
