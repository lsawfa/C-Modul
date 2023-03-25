//Exercise 1
#include <stdio.h>

void main(void){
    int n, jumlah=0, average=0;

    printf("=== Program Mencari Rata-Rata ===\n\n\n");
    printf("Enter n: ");
    scanf("%d", &n);

    int number[n];
	int i;
    for(i=1; i<=n; i++){
        printf("Enter number %d: ", i);
        scanf("%d", &number[i-1]);
        jumlah = jumlah + number[i-1];
    }
    average = jumlah/n;
    printf("\nAverage = %d", average);

    return 0;
}
