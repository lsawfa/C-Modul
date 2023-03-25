//program perhitungan pangkat dengan nilai basis dan eksponen
#include <stdio.h>

int pangkat(int x, int y){
   if(y==0){      //pemberhentian fungsi rekursif
        return 1;
   }else{ //proses rekursif
        return (x*pangkat(x,y-1));
   }
}

void main(){
    /* x adalah basis
       y adalah eksponen */
    int x, y, hasil;
    printf("Masukkan basis: ");
    scanf("%i", &x);
    printf("Masukkan eksponen: ");
    scanf("%i", &y);

    hasil=pangkat(x, y);
    printf("Jadi hasil perhitungan pangkat dengan basis %i dan eksponen %i adalah: %i", x, y, hasil);
    return 0;
}
