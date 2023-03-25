#include <stdio.h>
#include <math.h>

void main(){
    int n, t, j1, j2, j3, j4;
    float p1, p2, p3, p4, hx;
    printf("====PROGRAM PERHITUNGAN KEANEKARAGAMAN FAUNA====\n");
    printf("\n\n\nMasukkan total jumlah spesies : ");
    scanf("%i", &n);
    printf("\nMasukkan total jumlah populasi hewan : ");
    scanf("%i", &t);

    for(int i=1; i<=4; i++){
        printf("Masukkan total jumlah hewan untuk spesies ke - %i : ", i);
        switch(i){
        case 1:
            scanf("%i",&j1);
            continue;
        case 2:
            scanf("%i",&j2);
            continue;
        case 3:
            scanf("%i",&j3);
            continue;
        case 4:
            scanf("%i",&j4);
            continue;
        }
    }
    p1= j1/t;
    p2= j2/t;
    p3= j3/t;
    p4= j4/t;

    hx = ((p1*log(p1)/log(2.0))+(p2*log(p2)/log(2.0))+(p3*log(p3)/log(2.0))+(p4*log(p4)/log(2.0)));

    printf("Nilai entropi dari seluruh spesies dalam populasi hewan : %.2f\n", hx);
    printf("----------------");

    if(hx>=0&&hx<=1){
        printf("Keanekaragaman fauna pada wilayah tersebut sangat kurang");
    }else if(hx>1){
        printf("Keanekaragaman fauna pada wilayah tersebut sangat beragam");
    }

    return 0;

}
