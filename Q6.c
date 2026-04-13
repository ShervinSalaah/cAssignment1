#include <stdio.h>
int main(){
    int rows; 
    printf("Enter no.of rows\n"); 
    scanf("%d", &rows); 
    for (int i = 1; i <= rows; i++) {
        int spaceCount = rows - i;
        for (int s = 0; s < spaceCount; s++) {
            printf(" ");
        }

        int starCount = 2 * i - 1;
        for (int j = 1; j <=starCount; j++) {
            printf("* ");
            
            }          
        
        printf("\n");
    }


    return 0; 
}