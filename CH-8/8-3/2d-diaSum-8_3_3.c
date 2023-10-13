#include <stdio.h>

main() 
{
    int r, c;
    printf("Enter array's row size: ");
    scanf("%d", &r);
    printf("Enter array's column size: ");
    scanf("%d", &c);
    
    int a[r][c], i, j, sum=0;
    
    printf("\n----: Enter array elements :----\n\n");
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
         if(i==j)
         {
            sum += a[i][j];
          }
      } 
    }
    printf("\nSum of diagonal Array elements : %d",sum );
}
   