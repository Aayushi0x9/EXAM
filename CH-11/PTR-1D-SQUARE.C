// Write a Program to find the square of each element of a given 1D array using a Pointer
#include <stdio.h>

int main()
{
    int n;
    printf("Enter the array's size: ");
    scanf("%d", &n);

    int a[n], *ptr[n];

    printf("\n----: Enter array's elements :----\n\n");
    for (int i = 0; i < n; i++)
    {
        printf("a[%d] : ", i);
        scanf("%d", &a[i]);
    }

    for (int i = 0; i < n; i++)
        ptr[i] = &a[i];

    printf("\n----: Square of each element :----\n\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", *ptr[i] * *ptr[i]);
        if (i < n - 1)
            printf(", ");
    }
    return 0;
}
