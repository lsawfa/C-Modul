#include <stdio.h>
#include <string.h>
#include <conio.h>

void main(void){
    //deklarasi variabel
    char namalengkap[50], namapengguna[30], email[50], sandi[10];
    int telepon, masuk, kode, kodebenar, kelas, koin;
    char pilihan, pilihan1;
    char inputmasuk1[30], inputmasuk2[50], inputmasuk4[10], ig[20], input[10];
    int inputmasuk3, pilihan2, pilihan3, pilihan4, pilihan5, pilihan6, pilihan7;
    int pilihan8, pilihan9, pilihan10, pilihan11, pilihan12, pilihan13;
    int pilihan14, pilihan15, pilihan16, pilihan17;


    //Pembukaan aplikasi
    printf("======== ZUPER SMART ========\n\n");
        //Disini ditampilkan logo aplikasi Zuper Smart


    //Daftar
    printf("Nama Lengkap : ");
    gets(namalengkap);
    printf("Nama Pengguna : ");
    gets(namapengguna);
    printf("Email : ");
    gets(email);
    printf("No. Telepon : ");
    scanf("%i", &telepon);
    printf("Kata Sandi : ");
    gets(sandi);
        printf("Pilih perlihatkan sandi atau tidak : ");
        pilihan=getchar();
        if(pilihan=='y'||pilihan=='Y'){
            //Sandi diperlihatkan di layar
        }
        else if(pilihan=='t'||pilihan=='T'){
            //Sandi tidak diperlihatkan di layar
        }
    printf("Tekan daftar atau masuk : ");
    gets(pilihan1);
    if(strcmp(pilihan1, "Daftar")==0){
        //Halaman berpindah ke halaman kode verifikasi
    }else if(strcmp(pilihan1, "Masuk")==0){
        //Halaman Berpindah ke menu masuk
    }


    //Masuk
    printf("Pilih masuk dengan:\n1. Nama Pengguna\n2. Email\n3. Nomor Telepon\n");
    scanf("%i", &masuk);
    if(masuk==1){
        printf("Nama Pengguna : ");
        gets(inputmasuk1);
    }else if(masuk==2){
        printf("Email : ");
        gets(inputmasuk2);
    }else if(masuk==3){
        printf("No. Telepon : ");
        scanf("%i", &inputmasuk3);
    }
    printf("Kata Sandi : ");
    gets(inputmasuk4);
        printf("Pilih perlihatkan sandi atau tidak : ");
        pilihan=getchar();
        if(pilihan=='y'||pilihan=='Y'){
            //Sandi diperlihatkan di layar
        }
        else if(pilihan=='t'||pilihan=='T'){
            //Sandi tidak diperlihatkan di layar
        }
    printf("Tekan masuk atau daftar atau lupa kata sandi: ");
    gets(pilihan1);
    if(strcmp(pilihan1, "Masuk")==0){
        if(inputmasuk1==namapengguna||inputmasuk2==email||inputmasuk3==telepon){
            if(inputmasuk4==sandi){
                //Halaman berpindah ke halaman beranda
            }else{
                printf("Kata sandi yang anda masukkan salah");
            }
        }else{
            printf("Maaf nama pengguna/email/nomor telepon yang anda masukkan salah\n");
            printf("Masukkan ulang\n");
        }
    }else if(strcmp(pilihan1, "Daftar")==0){
        //Halaman Berpindah ke menu daftar
    }else if(strcmp(pilihan1, "Lupa Kata Sandi")==0){
        //Halaman Berpindah ke menu kode verifikasi untuk mengubah sandi
    }



    //Kode
    //Kode benar secara otomatis dikirimkan ke nomor telepon yang telah diinputkan
    printf("Kode verifikasi telah dikirim ke +628xxxxxxxxx\n");
    printf("Masukkan kode yang telah dikirimkan ke SMS-mu\n");
    scanf("%i", &kode);
    scanf("------------------------------------------------\n");
    printf("Tidak menerima kode verifikasi via SMS?\n");
    if(kode==kodebenar){
        /*halaman kode beralih ke beranda jika kode verifikasi dilakukan
        untuk pendaftaran akun, tetapi halaman kode akan beralih ke halaman
        ubah sandi jika kode verifikasi dilakukan untuk mengubah kata sandi */
    }else{
        printf("1. Kirim ulang kode verifikasi via SMS\n");
        printf("2. Kirim  kode verifikasi via email\n");
        scanf("%i", &pilihan2);
        if(pilihan2==1){
            //Kirim ulang kode verifikasi via SMS
        }else if(pilihan2==2){
            //Kirim ulang kode verifikasi via email
        }
    }



    //Beranda
    printf("===== Zuper Smart =====\n");
    printf("Pengaturan\n");
    //Foto profil
    printf("%s", namalengkap);
    printf("Kelas ");
    scanf("%i", &kelas);
    printf("Koin %i", koin);
    printf("\n\n");
    printf("--------------------------------------\n");
    printf("1. IPA      2. IPS      3. Bahasa\n");
    scanf("%i", &pilihan3);
    if(pilihan3==1){
        //Halaman beralih ke halaman IPA
        printf("===== Zuper Smart =====\n");
        printf("===== IPA =====\n");
        printf("1. Kembali\n");
        printf("2. Biologi\n");
        printf("3. Fisika\n");
        printf("4. Kimia\n");
        printf("5. Matematika\n");
        scanf("%i", &pilihan5);
        if(pilihan5==1){
            //Halaman kembali ke beranda
        }else if(pilihan5==2){
            //Halaman berpindah ke halaman biologi
        }else if(pilihan5==3){
            //Halaman berpindah ke halaman fisika
        }else if(pilihan5==4){
            //Halaman berpindah ke halaman kimia
        }else if(pilihan5==5){
            //Halaman berpindah ke halaman matematika
        }
    }else if(pilihan3==2){
        //Halaman beralih ke halaman IPS
        printf("===== Zuper Smart =====\n");
        printf("===== IPS =====\n");
        printf("1. Kembali\n");
        printf("2. Ekonomi\n");
        printf("3. Sosiologi\n");
        printf("4. Geografi\n");
        printf("5. Matematika\n");
        scanf("%i", &pilihan6);
        if(pilihan6==1){
            //Halaman kembali ke beranda
        }else if(pilihan6==2){
            //Halaman berpindah ke halaman ekonomi
        }else if(pilihan6==3){
            //Halaman berpindah ke halaman sosiologi
        }else if(pilihan6==4){
            //Halaman berpindah ke halaman geografi
        }else if(pilihan6==5){
            //Halaman berpindah ke halaman matematika
        }
    }else if(pilihan3==3){
        //Halaman beralih ke halaman Bahasa
        printf("===== Zuper Smart =====\n");
        printf("===== Bahasa =====\n");
        printf("1. Kembali\n");
        printf("2. Bahasa Indonesia\n");
        printf("3. Bahasa Inggris\n");
        scanf("%i", &pilihan7);
        if(pilihan7==1){
            //Halaman kembali ke beranda
        }else if(pilihan7==2){
            //Halaman berpindah ke halaman bahasa Indonesia
        }else if(pilihan7==3){
            //Halaman berpindah ke halaman bahasa Inggris
        }
    }
    printf("--------------------------------------\n");
    printf("1. Tes      2. Latihan Soal      3. Rangkuman\n");
    scanf("%i", &pilihan4);
    if(pilihan4==1){
        //Halaman beralih ke halaman tes
        printf("===== Zuper Smart =====\n");
        printf("===== Tes =====\n");
        printf("1. Kembali\n");
        printf("2. Tes Minat Bakat\n");
        printf("3. Tes Potensi Skolastik\n");
        printf("4. Tes Potensi Akademik\n");
        scanf("%i", &pilihan10);
        if(pilihan10==1){
            //Halaman kembali ke beranda
        }else if(pilihan10==2){
            //Halaman berpindah ke halaman tes minat bakat
        }else if(pilihan10==3){
            //Halaman berpindah ke halaman tes potensi skolastik
        }else if(pilihan10==4){
            //Halaman berpindah ke halaman tes potensi akademik
        }
    }else if(pilihan4==2){
        //Halaman beralih ke halaman latihan soal
        printf("===== Zuper Smart =====\n");
        printf("===== Latihan Soal =====\n");
        printf("1. Kembali\n");
        printf("2. IPA\n");
        printf("3. IPS\n");
        printf("4. Bahasa\n");
        scanf("%i", &pilihan8);
        if(pilihan8==1){
            //Halaman kembali ke beranda
        }else if(pilihan8==2){
            //Halaman berpindah ke halaman latihan soal IPA
        }else if(pilihan8==3){
            //Halaman berpindah ke halaman latihan soal IPS
        }else if(pilihan8==4){
            //Halaman berpindah ke halaman latihan soal bahasa
        }
    }else if(pilihan4==3){
        //Halaman beralih ke halaman rangkuman
        printf("===== Zuper Smart =====\n");
        printf("===== Rangkuman =====\n");
        printf("1. Kembali\n");
        printf("2. IPA\n");
        printf("3. IPS\n");
        printf("4. Bahasa\n");
        scanf("%i", &pilihan9);
        if(pilihan9==1){
            //Halaman kembali ke beranda
        }else if(pilihan9==2){
            //Halaman berpindah ke halaman rangkuman IPA
        }else if(pilihan9==3){
            //Halaman berpindah ke halaman rangkuman IPS
        }else if(pilihan9==4){
            //Halaman berpindah ke halaman rangkuman bahasa
        }
    }









    //Notifikasi
    printf("===== Zuper Smart =====\n");
    printf("1. Pesan Baru       2. Pesan Telah Dibaca\n");
    scanf("%i", &pilihan11);
    if(pilihan11==1){
        //Ditampilkan pesan notifikasi baru yang belum dibaca
        printf("1. Pesan 1\n2. Pesan 2\n3. Pesan 3\n");
        scanf("%i", &pilihan12);
        if(pilihan12==1){
            //Pesan notifikasi akan dipindahkan ke pesan telah dibaca
        }else if(pilihan12==2){
            //Pesan notifikasi akan dipindahkan ke pesan telah dibaca
        }else if(pilihan12==3){
            //Pesan notifikasi akan dipindahkan ke pesan telah dibaca
        }
    }else if(pilihan11==2){
        //Ditampilkan pesan yang sudah dibaca
    }
    printf("1. Pilih Semua\n2. Hapus\n");
    scanf("%i", &pilihan13);
    if(pilihan13==1){
        //Pesan akan dipilih semua
    }else if(pilihan13==2){
        //Pesan yang dipilih akan di hapus
    }






    //Akun
    printf("===== Zuper Smart =====\n");
    printf("Pengaturan\n");
    //Foto profil
    printf("%s", namalengkap);
    printf("Kelas ");
    scanf("%i", &kelas);
    printf("Koin %i", koin);
    printf("\n\n");
    printf("--------------------------------------\n");
    printf("Fitur\n");
        printf("1. Ubah kata sandi\n2. Ubah biodata akun\n");
        scanf("%i", &pilihan14);
        if(pilihan14==1){
            //Halaman berpindah ke halaman ubah kata sandi
            printf("Tuliskan kata sandi baru");
            gets(sandi);
            printf("Tuliskan ulang kata sandi baru");
            gets(input);
            printf("Selesai");
                //Tekan tombol selesai maka data akan tersimpan
            if(sandi==input){
                //Halaman berpindah ke kode verifikasi
                printf("Kode verifikasi telah dikirim ke +628xxxxxxxxx\n");
                printf("Masukkan kode yang telah dikirimkan ke SMS-mu\n");
                scanf("%i", &kode);
                scanf("------------------------------------------------\n");
                printf("Tidak menerima kode verifikasi via SMS?\n");
                if(kode==kodebenar){
                    /*halaman kode beralih ke beranda jika kode
                    verifikasi dilakukan untuk pendaftaran akun,
                    tetapi halaman kode akan beralih ke halaman
                    ubah sandi jika kode verifikasi dilakukan
                    untuk mengubah kata sandi */
                }else{
                    printf("1. Kirim ulang kode verifikasi via SMS\n");
                    printf("2. Kirim  kode verifikasi via email\n");
                    scanf("%i", &pilihan2);
                    if(pilihan2==1){
                        //Kirim ulang kode verifikasi via SMS
                    }else if(pilihan2==2){
                        //Kirim ulang kode verifikasi via email
                    }
                }
            }else{
                printf("Kata sandi yang dimasukkan tidak sama\n");
            }
        }else if(pilihan14==2){
            //Halaman berpindah ke halaman ubah biodata akun
            printf("===== Zuper Smart =====\n");
            printf("Foto profil");
                //mengubah foto profil
            printf("Nama Lengkap : ");
            gets(namalengkap);
            printf("Nama Pengguna : ");
            gets(namapengguna);
            printf("Email : ");
            gets(email);
            printf("No. Telepon : ");
            scanf("%i", &telepon);
            printf("Akun Instagram : ");
            gets(ig);
            printf("Daftar atau Kembali: ");
            gets(pilihan16);
            if(strcmp(pilihan16, "Daftar")==0){
                //Data tersimpan
            }else if(strcmp(pilihan16, "Kembali")==0){
                //Data tidak tersimpan
            }
        }
    printf("Info Lain\n");
        printf("1. Tips\n2. Tentang\n3. Beri penilaian aplikasi\n");
        scanf("%i", &pilihan15);
        if(pilihan15==1){
            //Halaman berpindah ke halaman tips
        }else if(pilihan15==2){
            //Halaman berpindah ke halaman tentang
        }else if(pilihan15==2){
            //Halaman berpindah ke halaman beri penilain aplikasi
        }
    printf("Keluar");
        //Keluar dari akun yang terdaftar

}
