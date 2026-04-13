#include <stdio.h>
int main(){
    int rows; 
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    for(int i=0; i<rows; i++){
        int starCount = 2*(rows - i) - 1;
        int spaceCount = i; 
        for(int s=0; s<spaceCount; s++){
            printf(" ");
        }
        for(int j=starCount; j>0; j--){
            printf("* ");
        }
        printf("\n");

    }
    return 0;
}