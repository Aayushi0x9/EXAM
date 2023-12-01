#include <stdio.h>

void cube(int size, int array[size][size]) 
{
    int *ptr[size][size],i,j;

    for ( i = 0 ; i < size ; i++){
        for ( j = 0 ; j < size ; j++){
        ptr[i][j] = &array[i][j];
        }
    }
    for ( i = 0 ; i < size; i++){
        for( j = 0; j < size; j++){
        printf("%d ", (*ptr[i][j])*(*ptr[i][j])*(*ptr[i][j]));
        }
        printf("\n"); 
    }
}
int main()
{
     int size,i,j;
    printf("Enter array's size: ");
    scanf("%d",&size);
    printf("\n\n");
    int a[size][size] ;
    for (i = 0; i < size ;i++){
        for ( j = 0 ; j < size; j++){
            printf("Enter array elements a[%d][%d]: ",i,j);
            scanf("%d", &a[i][j]);
        }
    }
    printf("\n\n");
    cube(size, a);
return 0;
}