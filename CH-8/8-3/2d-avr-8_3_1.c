#include <stdio.h>

main() 
{
    int r, c;
    printf("Enter array's row size: ");
    scanf("%d", &r);
    printf("Enter array's column size: ");
    scanf("%d", &c);
    
    int a[r][c],b[r][c],sum=0, i, j, s;
    
    printf("\n----: Enter array A elements :----\n\n");
    for (i = 0; i < r; i++) 
    { 
        for(j = 0; j < c; j++)
        {
              printf("Array is a[%d][%d] = ",i ,j);
              scanf("%d", &a[i][j]);
        }
    }
    
    for (i = 0; i < r; i++)
    {
      for(j = 0; j < c; j++)
      { 
        sum += a[i][j] ;
      } 
    }
    s=r*c;
    printf("\nAverage of an Array: %d",sum/s);
}