//Program menentukan volume dan luas permukaan dari bangun ruang
#include <stdio.h>
#define phi 22.00/7.00

//1. Fungsi untuk menghitung volume kubus
float volumeKubus(float s){
    float volume;
    volume=s*s*s;
    return(volume);
}
//2. Fungsi untuk menghitung luas permukaan kubus
float luasPermukaanKubus(float s){
    float luaspermukaan;
    luaspermukaan=6*s*s;
    return(luaspermukaan);
}
//3. Fungsi untuk menghitung volume balok
float volumeBalok(float p, float l, float tb){
    float volume;
    volume=p*l*tb;
    return(volume);
}
//4. Fungsi untuk menghitung luas permukaan balok
float luasPermukaanBalok(float p, float l, float tb){
    float luaspermukaan;
    luaspermukaan=(2*p*l)+(2*p*tb)+(2*l*tb);
    return(luaspermukaan);
}
//5. Fungsi untuk menghitung volume tabung
float volumeTabung(float r, float ttb){
    float volume;
    volume=phi*r*r*ttb;
    return(volume);
}
//6. Fungsi untuk menghitung luas permukaan tabung
float luasPermukaanTabung(float r, float ttb){
    float luaspermukaan;
    luaspermukaan=(2*phi*r)*(r+ttb);
    return(luaspermukaan);
}
float main(){
    //Deklarasi Variabel
    float s, p, l, tb, r, ttb, volume, luaspermukaan, kubus, balok, tabung;
    int bangunruang;

    printf("=============== PROGRAM MENCARI VOLUME DAN LUAS PERMUKAAN BANGUN RUANG ===============\n");
    //Memilih bangun ruang yang akan dihitung volume dan luas permukaanya
    printf("Hitung Bangun Ruang Kubus = ketik angka 1\nHitung Bangun Ruang Balok = ketik angka 2\nHitung Bangun Ruang Tabung = ketik angka 3\nHitung Semus Bangun Ruang = ketik angka selain angka 1, 2, dan 3\n");
    printf("\nPilih bangun ruang: ");
    scanf("%i", &bangunruang);
    //statement if elseif
    if(bangunruang==1){
        printf("\n---------------KUBUS---------------\n\n");
        printf("Masukkan sisi kubus ");
        scanf("%f", &s);
        kubus=volumeKubus(s);
        printf("Volume Kubus: %.2f", kubus);
        kubus=luasPermukaanKubus(s);
        printf("\nLuas Permukaan Kubus: %.2f\n\n", kubus);
    } else if(bangunruang==2){
        printf("\n---------------BALOK---------------\n\n");
        printf("Masukkan panjang balok ");
        scanf("%f", &p);
        printf("Masukkan lebar balok ");
        scanf("%f", &l);
        printf("Masukkan tinggi balok ");
        scanf("%f", &tb);
        balok=volumeBalok(p, l, tb);
        printf("Volume Balok: %.2f", balok);
        balok=luasPermukaanBalok(p, l, tb);
        printf("\nLuas Permukaan Balok: %.2f\n\n", balok);
    } else if(bangunruang==3){
        printf("\n---------------TABUNG---------------\n\n");
        printf("Masukkan jari-jari tabung ");
        scanf("%f", &r);
        printf("Masukkan tinggi tabung ");
        scanf("%f", &ttb);
        tabung=volumeTabung(r,ttb);
        printf("Volume Tabung: %.2f", tabung);
        tabung=luasPermukaanTabung(r, ttb);
        printf("\nLuas Permukaan Tabung: %.2f\n\n", tabung);
    } else {
        printf("\n---------------KUBUS---------------\n\n");
        printf("Masukkan sisi kubus ");
        scanf("%f", &s);
        kubus=volumeKubus(s);
        printf("Volume Kubus: %.2f", kubus);
        kubus=luasPermukaanKubus(s);
        printf("\nLuas Permukaan Kubus: %.2f\n\n", kubus);

        printf("\n---------------BALOK---------------\n\n");
        printf("Masukkan panjang balok ");
        scanf("%f", &p);
        printf("Masukkan lebar balok ");
        scanf("%f", &l);
        printf("Masukkan tinggi balok ");
        scanf("%f", &tb);
        balok=volumeBalok(p, l, tb);
        printf("Volume Balok: %.2f", balok);
        balok=luasPermukaanBalok(p, l, tb);
        printf("\nLuas Permukaan Balok: %.2f\n\n", balok);

        printf("\n---------------TABUNG---------------\n\n");
        printf("Masukkan jari-jari tabung ");
        scanf("%f", &r);
        printf("Masukkan tinggi tabung ");
        scanf("%f", &ttb);
        tabung=volumeTabung(r,ttb);
        printf("Volume Tabung: %.2f", tabung);
        tabung=luasPermukaanTabung(r, ttb);
        printf("\nLuas Permukaan Tabung: %.2f\n\n", tabung);
    }
    printf("\n===============SELESAI===============\n");
    return 0;
}
