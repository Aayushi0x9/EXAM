#include <stdio.h>

main() 
{
    int size,i;
    printf("Enter array size: ");
    scanf("%d", &size);

    int a[size];
    
    printf("\nEnter array elements:\n\n");
    for (i = 0; i < size; i++) 
    {
        printf("a[%d] = ", i);
        scanf("%d", &a[i]);
    }
    
    printf("__________________\n");
    printf("\nSquare of an Array: ");
    
    for(i = 0; i < size; i++)
    {
         printf("\na[%d] : %d", i,a[i]*a[i]);
    }
    
}