#include <stdio.h>

main() 
{
    int size;
    printf("Enter array size: ");
    scanf("%d", &size);

    int a[size];
    
    printf("\nEnter array elements:\n\n");
    for (int i = 0; i < size; i++) 
    {
        printf("a[%d] = ", i);
        scanf("%d", &a[i]);
    }
    printf("__________________\n");
    printf("\nLength of an Array: %d\n", size);
}