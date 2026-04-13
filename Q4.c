#include <stdio.h>
int main(){
    int rows; 
    printf("Enter no.of rows\n"); 
    scanf("%d", &rows); 
    for(int i=rows; i>0; i--){
        for(int j=i; j>0; j--){
            printf("* "); 
    }
        printf("\n"); 
    }
    return 0; 
}