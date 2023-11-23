#include <stdio.h>

int main()
{
    int i, j, n;

    printf("Enter size of array : ");
    scanf("%d", &n);

    int a[n], b[n], fact;

    printf("\n\n----: Enter array of A :----\n");
    for (i = 0; i < n; i++)
    {
        printf("Enter array a[%d] : ", i);
        scanf("%d", &a[i]);
    }

    printf("\n\n----: Factorial of Array A  :----\n");

    for (i = 0; i < n; i++)
    {
        fact = 1;
        for (j = 1; j <= a[i]; j++)
        {
            fact *= j;
        }
        printf("\na[%d]: %d", i, fact);
    }

    return 0;
}