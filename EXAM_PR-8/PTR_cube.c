#include <stdio.h>

int main()
{
    int size;
    
    printf("Enter the array size : ");
    scanf("%d",&size);
    
    int a[size][size];
    printf("\n\nEnter array Elements :\n");
    for(int i = 0; i < size; i++){
        for(int j = 0; j < size; j++){
        printf("a[%d][%d] : ",i,j);
        scanf("%d",&a[i][j]);
        }
    }
    int *ptra[size][size],b[size][size];
    for(int i = 0; i < size; i++){
     for(int j = 0; j < size; j++){
       ptra[i][j] = &a[i][j];
       b[i][j] = *ptra[i][j] * *ptra[i][j];
     }
    }
    
    printf("\n\nCube array Element :\n");
    for(int i = 0; i < size; i++){
        for(int j = 0; j < size; j++){
          printf("%d ",b[i][j]* *ptra[i][j]); 
        }
        printf("\n");
    }
    return 0;
}