/*Program untuk mencari nilai rata-rata dan keterangan lulus atau tidak lulus*/

#include <stdio.h>
#include <stdlib.h>

void main()
{
	//Deklarasi Variabel
    char nama[30];
    int npd, nk, npti, no, rata;
    /*  npd = nilai pemrograman dasar
		nk = nilai kalkulus
		npti = nilai pti
		no = nilai orkom */


    //Input nama
    printf("Masukkan nama:");
    scanf("%s", &nama);


	printf("Masukkan nilai Pemrograman Dasar:");
	scanf("%i", &npd);	//Input nilai Pemrograman Dasar
	printf("Masukkan nilai Kalkulus:");
	scanf("%i", &nk);	//Input nilai Kalkulus
	printf("Masukkan nilai PTI:");
	scanf("%i", &npti);	//Input nilai PTI
	printf("Masukkan nilai Orkom:");
	scanf("%i", &no);	//Input nilai Orkom

	rata = (npd + nk + npti + no) / 4;	// menghitung rata-rata dengan operasi penjumlahan dan operasi pembagian

	printf("\nNama: %s\n", nama);		//output nama
	printf("Rata-rata nilai: %i\n", rata);	//output rata-rata nilai

	if(rata >= 75)
		printf("Selamat Anda Lulus");	//Jika pernyataan rata >= 75 benar, maka akan muncul output Keterangan 1 yaitu Lulus
	else
		printf("Maaf Anda Tidak Lulus\n");	//Jika pernyataan rata >= 75 salah, maka akan muncul output Keterangan 2 yaitu Tidak Lulus

	return 0;

}
