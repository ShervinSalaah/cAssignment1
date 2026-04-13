#include <stdio.h>
int factorial(int n){
    int result = 1; 
    for(int i=1; i<=n; i++){
        result *= i; 
    }
    return result;
}

int main() {
   int rows, nfactorial, kfactorial;
   printf("Enter the number of rows: ");
    scanf("%d", &rows);
    for(int i=1; i<=rows; i++){
        for(int s=0; s<=rows-i; s++){
                printf(" ");
            }
        for(int j=0; j<i; j++){ 
            int coefficient; 
            nfactorial = factorial(i-1);
            kfactorial = factorial(j);
            coefficient = nfactorial / (kfactorial * factorial(i-1-j));
            printf("%d ", coefficient);
        }
        printf("\n");
    }

    return 0;
}