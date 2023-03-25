#include <stdio.h>
#include <math.h>

void main(void){
    int n, tot;

    printf("----PROGRAM PERHITUNGAN KEANEKARAGAMAN FAUNA----\n\n\n");

    printf("Masukkan total jumlah spesies: ");
    scanf("%d", &n);
    printf("Masukkan total jumlah populasi hewan: ");
    scanf("%d", &tot);

    int tn[n];
    float px[n];
    float hx;

    printf("\n\n\n\n");
    for(int i=1; i<=n; i++){
        printf("Masukkan total jumlah hewan untuk spesies ke-%d: ", i);
        scanf("%d", &tn[i-1]);
        px[i-1] = tn[i-1]/tot;
    }

    for(int i=1; i<=n; i++){
        hx=hx+(px[i-1]*(log(px[i-1])/log(2.0)));
    }
    printf("\n\n\n\n");
    printf("Nilai entropi dari seluruh spesies dalam populasi hewan: %.2f", hx);

    printf("\n-------------------\n");
    printf("Kesimpulannya adalah : ");
    if(hx>=0&&hx<1){
        printf("Keberagaman fauna pada wilayah tersebut sangat kurang\n");
    }else if(hx>=1){
        printf("Keberagaman fauna pada wilayah tersebut sangat beragam\n");
    }
}
