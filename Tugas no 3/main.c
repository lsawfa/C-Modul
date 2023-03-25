/* Program menentukan nilai y dari operasi soal nomor 3a dan 3b*/

#include <stdio.h>
#include <stdlib.h>

void main()
{
    //Deklarasi Variabel
    float a, b, c, x, y;

    //Memasukkan atau input nilai a
    printf("Masukkan Nilai a: ");
    scanf("%f", &a);

    //Memasukkan atau input nilai b
    printf("Masukkan Nilai b: ");
    scanf("%f", &b);

    //Memasukkan atau input nilai c
    printf("Masukkan Nilai c: ");
    scanf("%f", &c);

    //Memasukkan atau input nilai x
    printf("Masukkan Nilai x: ");
    scanf("%f", &x);

    //Perhitungan dari variabel b, x, dan c menghasilkan y
    y = (b * x * x) + (x / 2) - c;

    //Menampilkan nilai y setelah dilakukan operasi pada soal a
    printf("\nNilai y setelah dilakukan operasi pada soal a adalah: %.3f\n", y);

    //y yang diperoleh dari operasi diatas dimasukkan lagi di operasi di bawah ini
    y = (0.3 * x * y ) / (2 * a);

    //Menampilkan nilai y setelah dilakukan oleh operasi a dan b
    printf("Nilai y setelah dilakukan operasi pada soal a dan b adalah: %.3f\n", y);

    return 0;
}
