#include <stdio.h>

main() 
{
    int size;
    printf("Enter array size: ");
    scanf("%d", &size);

    int a[size];
    
    printf("\n----: Enter array elements :----\n\n");
    for (int i = 0; i < size; i++) 
    {
        printf("Array is a[%d] = ", i);
        scanf("%d", &a[i]);
    }

    float sum = 0, avr;
    for (int i = 0; i < size; i++) {
        sum += a[i];
    }

    avr = sum / size;
    printf("\nAverage of an Array: %.2f\n",avr );

}