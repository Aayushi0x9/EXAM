#include <stdio.h>

main() 
{
    int r, c;
    int a[5][5], i, j ;
    
    printf("\n----: Enter array elements :----\n\n");
    for (i = 0; i < 5; i++) 
    { 
        for(j = 0; j < 5; j++)
        {
              printf("Array is a[%d][%d] = ",i ,j);
              scanf("%d", &a[i][j]);
        }
    }

    for (i = 0; i < 5; i++)
    {
      for(j = 0; j < 5; j++)
      { 
         if(i==0 || j==0 || i==4 || j==4)
         {
            printf("%d ",a[i][j]);
         }
         else
         {
             printf("  ");
         }
      } 
      printf("\n");
    }

}