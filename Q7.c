#include <stdio.h>
int main(){
    int rows; 
    printf("Enter no.of rows\n"); 
    scanf("%d", &rows); 
    for (int i = 1; i <= rows; i++) {
        int spaceCount = rows - i;
        for (int s = 1; s <= spaceCount; s++) {
            printf(" ");
        }
        int peak = 2 * i - 1;
        for (int k = i; k <= peak; k++) {
            printf("%d", k);
        }
        for (int k = peak - 1; k >= i; k--) {
            printf(" %d", k);
        }
        printf("\n");
            
        }   
        
    
    return 0;
}
