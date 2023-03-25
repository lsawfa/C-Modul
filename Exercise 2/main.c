//Exercise 2
#include <stdio.h>

void main(void){
    int n;
    float largest;
    float number[100];

    printf("=== Program Mencari Bilangan Terbesar ===");
    printf("\n\nEnter total number of elements (1 to 100): ");
    scanf("%d", &n);

    for(int i=1; i<=n; i++){
        printf("Enter Number %d: ", i);
        scanf("%f", &number[i-1]);
    }
    largest=number[0];
    for(int i=1; i<=n; i++){
        if(number[i-1]>=largest){
            largest=number[i-1];
        }
    }
    printf("\nLargest element = %.2f", largest);

    return 0;
}
