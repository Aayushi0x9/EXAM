#include <stdio.h>
 
 void arrayinput(int size){
       int a[size][size];
       printf("\n\nEnter array Elements :\n");
       for(int i = 0; i < size; i++){
        for(int j = 0; j < size; j++){
        printf("a[%d][%d] : ",i,j);
        scanf("%d",&a[i][j]);
        }
    }
 }
 int cube(int size,int *ptra[size][size]){
    int i,j,b[size][size],a[i][j];
    for(int i = 0; i < size; i++){
     for(int j = 0; j < size; j++){
       b[i][j] = *ptra[i][j] * *ptra[i][j] * *ptra[i][j];
     }
    }
    return b[i][j];
 }
int main()
{
    int size,a[size][size],b[size][size];
    
    printf("Enter the array size : ");
    scanf("%d",&size);
    
    arrayinput(size);
    cube(size,&a[size][size]);
    
    printf("\n\nCube array Element :\n");
    for(int i = 0; i < size; i++){
        for(int j = 0; j < size; j++){
          printf("%d ",b[i][j]); 
        }
        printf("\n");
    }
}