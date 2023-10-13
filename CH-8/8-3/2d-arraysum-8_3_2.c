#include <stdio.h>

main() 
{
    int r, c;
    printf("Enter array's row size: ");
    scanf("%d", &r);
    printf("Enter array's column size: ");
    scanf("%d", &c);
    
    int a[r][c],b[r][c],k[r][c], i, j;
    
    printf("\n----: Enter array A elements :----\n\n");
    for (i = 0; i < r; i++) 
    { 
        for(j = 0; j < c; j++)
        {
              printf("Array is a[%d][%d] = ",i ,j);
              scanf("%d", &a[i][j]);
        }
    }
    printf("\n----: Enter array B elements :----\n\n");
    for (i = 0; i < r; i++) 
    { 
        for(j = 0; j < c; j++)
        {
              printf("Array is b[%d][%d] = ",i ,j);
              scanf("%d", &b[i][j]);
        }
    }
    
    for (i = 0; i < r; i++)
    {
      for(j = 0; j < c; j++)
      { 
        k[i][j] = a[i][j] + b[i][j] ;
      } 
    }
    printf("\nSum of an Array: \n");
    int sum = 0;
    for (i = 0; i < r; i++)
    {
      for(j = 0; j < c; j++)
      { 
        printf("%d ",k[i][j]);
      } 
      printf("\n");
    }


}