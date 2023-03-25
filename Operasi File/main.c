//189-Larynt Sawfa Kenanga
#include <stdio.h>
#include <string.h>

void main()
{
    FILE *filenim, *filenamadepan, *filenamabelakang, *filekelas;
    int lanjut;

    printf("====================================\n");
    printf("Sistem Pendataan Akun I-Lab Infotech\n");
    printf("====================================\n");

    do{
        char nim[50][50], namadepan[25][50], namabelakang[25][50], kelas[20][50];
        char nc[50], ndc[25], nbc[25], kc[25], nu[50], nd[50];
        int n, x=0, i=0, j=0, data;
        char bacanim[50], bacanamadepan[25], bacanamabelakang[25], bacakelas[20];
        char decision;
        utama:
        printf("=== Pilihan Menu ===\n\n");
        printf("1. Create Data\n2. Show Data\n3. Update Data\n4. Delete Data\n5. Search Data\n6. Exit\n\n");
        printf("------------------------------------\n");
        printf("Masukkan Pilihan : ");
        scanf("%i", &n);

        if(n==1){
            filenim=fopen("nim.txt", "a+");
            filenamadepan=fopen("namadepan.txt", "a+");
            filenamabelakang=fopen("namabelakang.txt", "a+");
            filekelas=fopen("kelas.txt", "a+");

            for(int i=0;i<50;i++){
                if(strcmp(nim[i], "")==0){
                    x=i;
                    i=51;
                }
            }
            printf("\n=== Create Data ===\n\n");

                printf("Input NIM Pratikan: ");
                fflush(stdin);
                gets(nc);

                if(strchr(nc, 33)||strchr(nc, 43)||strchr(nc, 47)||strchr(nc, 35)||strchr(nc, 36)||strchr(nc, 37)||strchr(nc, 94)||strchr(nc, 38)||strchr(nc, 42)||strchr(nc, 39)||strchr(nc, 40)||strchr(nc, 41)||strchr(nc, 46)||strchr(nc, 44)||strchr(nc, 45)){
                    printf("NIM tidak boleh mengandung karakter seperti !+/#$%^&*’().,\n");
                }else{
                    for(int i=0; i<50; i++){
                        if(strcmp(nc, nim[i])==0){
                            printf("NIM sudah pernah diinputkan\n");
                            goto utama;
                        }
                    }
                        printf("Input Nama Depan Pratikan: ");
                        fflush(stdin);
                        gets(ndc);
                        printf("Input Nama Belakang Pratikan:");
                        fflush(stdin);
                        gets(nbc);
                        printf("Input Kelas Pemrograman Dasar: ");
                        fflush(stdin);
                        gets(kc);

                        strcpy(nim[x], nc);
                        fputs(nim[x], filenim);
                        putc('\n', filenim);
                        strcpy(namadepan[x], ndc);
                        fputs(namadepan[x], filenamadepan);
                        putc('\n', filenamadepan);
                        strcpy(namabelakang[x], nbc);
                        fputs(namabelakang[x], filenamabelakang);
                        putc('\n', filenamabelakang);
                        strcpy(kelas[x], kc);
                        fputs(kelas[x], filekelas);
                        putc('\n', filekelas);

                        printf("------------------------------------\n");
                        printf("Data Berhasil Ditambahkan\n");
                        printf("------------------------------------\n");
                }
            fclose(filenim);
            fclose(filenamadepan);
            fclose(filenamabelakang);
            fclose(filekelas);
        }else if(n==2){
            printf("\n=== List Data ===\n\n");

            filenim=fopen("nim.txt", "r");
            filenamadepan=fopen("namadepan.txt", "r");
            filenamabelakang=fopen("namabelakang.txt", "r");
            filekelas=fopen("kelas.txt", "r");

            if(filenim==NULL||filenamadepan==NULL||filenamabelakang==NULL||filekelas==NULL){
                printf("Error: file tidak tersedia !!!\n");
            }
            while(fgets(bacanim, 50, filenim)!= NULL&&fgets(bacanamadepan, 25, filenamadepan)!= NULL&&fgets(bacanamabelakang, 25, filenamabelakang)!= NULL&&fgets(bacakelas, 20, filekelas)!= NULL){
                bacanim[strcspn(bacanim, "\n")]=0;
                bacanamadepan[strcspn(bacanamadepan, "\n")]=0;
                bacanamabelakang[strcspn(bacanamabelakang, "\n")]=0;
                bacakelas[strcspn(bacakelas, "\n")]=0;
                strcat(bacanamadepan, bacanamabelakang);
                printf("== %i ==\n\n", j+1);
                        printf("NIM Pratikan : %s\n", bacanim);
                        printf("Nama Pratikan : %s\n",bacanamadepan);
                        printf("Kelas Pemrograman Dasar : %s\n", strupr(bacakelas));
                        printf("------------------------------------\n");
                j++;
            }
            fclose(filenim);
            fclose(filenamadepan);
            fclose(filenamabelakang);
            fclose(filekelas);
        }else if(n==3){
            printf("\n=== Update Data ===\n\n");

            filenim=fopen("nim.txt", "w+");
            filenamadepan=fopen("namadepan.txt", "w+");
            filenamabelakang=fopen("namabelakang.txt", "w+");
            filekelas=fopen("kelas.txt", "w+");

            printf("Masukkan NIM Pratikan yang ingin diedit datanya : ");
            fflush(stdin);
            gets(nu);
            for(int i=0;i<=50;i++){
                if(strcmp(nim[i], nu)==0){
                    x=i;
                    i=51;
                    printf("Nama Depan Baru : ");
                    fflush(stdin);
                    gets(ndc);
                    printf("Nama Belakang Baru : ");
                    fflush(stdin);
                    gets(nbc);
                    printf("Kelas Baru : ");
                    fflush(stdin);
                    gets(kc);

                    strcpy(nim[x], nu);
                    fputs(nim[x], filenim);
                    putc('\n', filenim);
                    strcpy(namadepan[x], ndc);
                    fputs(namadepan[x], filenamadepan);
                    putc('\n', filenamadepan);
                    strcpy(namabelakang[x], nbc);
                    fputs(namabelakang[x], filenamabelakang);
                    putc('\n', filenamabelakang);
                    strcpy(kelas[x], kc);
                    fputs(kelas[x], filekelas);
                    putc('\n', filekelas);

                    printf("------------------------------------\n");
                    printf("Data Berhasil Diedit\n");
                    printf("------------------------------------\n");
                }
            }
            fclose(filenim);
            fclose(filenamadepan);
            fclose(filenamabelakang);
            fclose(filekelas);
        }else if(n==4){
            x=0;
            printf("\n=== Delete Data ===\n\n");

            filenim=fopen("nim.txt", "w+");
            filenamadepan=fopen("namadepan.txt", "w+");
            filenamabelakang=fopen("namabelakang.txt", "w+");
            filekelas=fopen("kelas.txt", "w+");

            printf("Masukkan NIM Pratikan yang ingin dihapus datanya : ");
            fflush(stdin);
            gets(nd);
            for(int i=0;i<=50; i++){
                if(strcmp(nim[i], nd)==0){
                    x=i;
                    i=51;
                    strcpy(nim[x], "");
                    strcpy(namadepan[x], "");
                    strcpy(namabelakang[x], "");
                    strcpy(kelas[x], "");

                    printf("------------------------------------\n");
                    printf("Data Berhasil Dihapus\n");
                    printf("------------------------------------\n");
                    }
            }
            fclose(filenim);
            fclose(filenamadepan);
            fclose(filenamabelakang);
            fclose(filekelas);
        }else if(n==5){
            printf("\n=== Search Data ===\n\n");

            filenim=fopen("nim.txt", "r");
            filenamadepan=fopen("namadepan.txt", "r");
            filenamabelakang=fopen("namabelakang.txt", "r");
            filekelas=fopen("kelas.txt", "r");

            printf("Masukkan NIM Pratikan yang ingin dicari datanya : ");
            fflush(stdin);
            gets(nc);
            for(int i=0; i<50; i++){
                if(strcmp(nim[i], nc)==0){
                    printf("NIM Pratikan : %s\n", nim[i]);
                    printf("Nama Pratikan : %s%s\n", namadepan[i], namabelakang[i]);
                    printf("Kelas Progdas : %s\n", strupr(kelas[i]));
                }
            }
            fclose(filenim);
            fclose(filenamadepan);
            fclose(filenamabelakang);
            fclose(filekelas);
        }else if(n==6){
            printf("EXIT");
            return 0;
        }
        i++;
        printf("Apakah anda ingin mengulang program? [1=yes]: ");
        scanf("%i", &lanjut);
        printf("------------------------------------\n");
    }while(lanjut==1);
    return 0;
}
