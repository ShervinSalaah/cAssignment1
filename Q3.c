#include <stdio.h>
int main(){
    int rows; 
    printf("Enter no.of rows\n"); 
    scanf("%d", &rows); 
    for(int i=0; i<rows; i++){
        for(int j=0; j<=i; j++){
            printf("%c ",'A'+i); 
        }
        printf("\n"); 
    }

    return 0; 
}