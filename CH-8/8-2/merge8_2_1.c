#include <stdio.h>

main() 
{
    int asize,bsize;
    printf("Enter array A size: ");
    scanf("%d", &asize);
    printf("Enter array B size: ");
    scanf("%d", &bsize);

    int a[asize],b[bsize],c[asize+bsize];
    
    printf("\nEnter array A elements:\n\n");
    for (int i = 0; i < asize; i++) 
    {
        printf("Enter a[%d] = ", i);
        scanf("%d", &a[i]);
    }
    
    printf("\nEnter array B elements:\n\n");
    for (int i = 0; i < bsize; i++) 
    {
        printf("Enter b[%d] = ", i);
        scanf("%d", &b[i]);
    }
    
    for (int i = 0; i < asize; i++) 
    {
         c[i] = a[i];
    }
    
    for (int i = 0; i < bsize; i++) 
    {
         c[asize + i] = b[i];
    }
    printf("\n__________________\n\nn");
    printf("C array's merge is :" );
    for (int i = 0; i < asize + bsize ; i++) 
    {
         printf(" %d",c[i]);
         if(c[i]!=asize+bsize-1)
             printf(", ");
         
    }
}