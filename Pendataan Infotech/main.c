
//189-Larynt Sawfa Kenanga

#include <stdio.h>
#include <string.h>

void main (void){
    int lanjut;

    printf("====================================\n");
    printf("Sistem Pendataan Akun I-Lab Infotech\n");
    printf("====================================\n");

    do{
        char nim[50][50], namamahasiswa[50][50], kelas[50][50], namadosen[50][50];
        char s[50], a[50], b[50], c[50], d[50], e[50], f[50];
        int i=0, j=0, n=0, x=0;
        // s = variabel nim untuk input
        // a = variabel nama mahasiswa untuk input
        // b = variabel kelas untuk input
        // c = variabel nama dosen untuk input
        // d = variabel nim untuk update
        // e = variabel nim untuk delete
        // f = variabel nim untuk search
        // n = variabel pilihan
        // i, j, x = variabel untul perulangan
        printf("=== Pilihan Menu ===\n\n");
        printf("1. Create Data\n2. Show Data\n3. Update Data\n4. Delete Data\n5. Search Data\n6. Exit\n\n");
        printf("------------------------------------\n");
        printf("Masukkan Pilihan : ");
        scanf("%i", &n);

        if(n==1){
            for(int i=0;i<50;i++){
                if(strcmp(nim[i], "")==0){
                    x=i;
                    i=51;
                }
            }
            printf("\n=== Create Data ===\n\n");

            printf("Input NIM Pratikan: ");
            fflush(stdin);
            gets(s);

            if(strlen(s)>11){
                printf("NIM tidak boleh lebih  dari 10 digit\n");
            }else if(strcmp(s, nim[i])==0){
                printf("NIM sudah pernah diinputkan\n");
            }else if(strlen(nim[x])<11){
                printf("Input Nama Pratikan: ");
                fflush(stdin);
                gets(a);
                printf("Input Kelas Pemrograman Dasar: ");
                fflush(stdin);
                gets(b);
                printf("Input Nama Dosen Pengampu:");
                fflush(stdin);
                gets(c);

                strcpy(nim[x], s);
                strcpy(namamahasiswa[x], a);
                strcpy(kelas[x], b);
                strcpy(namadosen[x], c);

                printf("------------------------------------\n");
                printf("Data Berhasil Ditambahkan\n");
                printf("------------------------------------\n");
            }
        }else if(n==2){
            printf("\n=== List Data ===\n\n");
            for(int i=0; i<=50; i++){
                if(strcmp(nim[i], "")==0){
                    i=51;
                }else{
                    printf("== %i ==\n\n", i+1);
                    printf("NIM Pratikan : %s\n", nim[i]);
                    printf("Nama Pratikan : %s\n", namamahasiswa[i]);
                    printf("Kelas Pemrograman Dasar : %s\n", kelas[i]);
                    printf("Nama Dosen Pengampu : %s\n", namadosen[i]);
                    printf("------------------------------------\n");
                }
            }
        }else if(n==3){
            printf("\n=== Update Data ===\n\n");
            printf("Masukkan NIM Pratikan yang ingin diedit datanya : ");
            fflush(stdin);
            gets(d);
            for(int i=0;i<=50;i++){
                if(strcmp(nim[i], d)==0){
                    x=i;
                    i=51;
                    printf("Nama Baru : ");
                    fflush(stdin);
                    gets(a);
                    printf("Kelas Baru : ");
                    fflush(stdin);
                    gets(b);
                    printf("Dosen Pengampu Baru : ");
                    fflush(stdin);
                    gets(c);

                    strcpy(namamahasiswa[x], a);
                    strcpy(kelas[x], b);
                    strcpy(namadosen[x], c);

                    printf("------------------------------------\n");
                    printf("Data Berhasil Diedit\n");
                    printf("------------------------------------\n");
                }
            }
        }else if(n==4){
            x=0;
            printf("\n=== Delete Data ===\n\n");
            printf("Masukkan NIM Pratikan yang ingin dihapus datanya : ");
            fflush(stdin);
            gets(e);
            for(int i=0;i<=50; i++){
                if(strcmp(nim[i], e)==0){
                    x=i;
                    i=51;
                    strcpy(nim[x], "");
                    strcpy(namamahasiswa[x], "");
                    strcpy(kelas[x], "");
                    strcpy(namadosen[x], "");

                    printf("------------------------------------\n");
                    printf("Data Berhasil Dihapus\n");
                    printf("------------------------------------\n");
                }
            }
        }else if(n==5){
            printf("\n=== Search Data ===\n\n");
            printf("Masukkan NIM Pratikan yang ingin dicari datanya : ");
            fflush(stdin);
            gets(f);
            for(int i=0; i<50; i++){
                if(strcmp(nim[i], f)==0){
                    printf("NIM Pratikan : %s\n", nim[i]);
                    printf("Nama Pratikan : %s\n", namamahasiswa[i]);
                    printf("Kelas Progdas : %s\n", kelas[i]);
                    printf("Dosen Pengampu : %s\n", namadosen[i]);
                }
            }
        }else if(n==6){
            printf("EXIT");
            return 0;
        }
    i++;
    printf("Apakah anda ingin mengulang program? [1=yes]: ");
    scanf("%i", &lanjut);
    printf("------------------------------------\n");
    }while (lanjut == 1);
        return 0;
}







