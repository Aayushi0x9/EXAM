#include <stdio.h>

int main()
{
    int i, n;

    printf("Enter size of array : ");
    scanf("%d", &n);

    int a[n], b[n], fact = 1;

    printf("\n\n----: Enter array of A :----\n");
    for (i = 0; i < n; i++)
    {
        printf("Enter array a[%d] : ", i);
        scanf("%d", &a[i]);
    }

    printf("\n\n----: Factorial of Array A  :----\n");

    for (i = 0; i < n; i++)
    {
     for (i = 0; i <a[i]; i++)
        {
            b[i]*=i;
        }
        
    }
    printf("\nc[%d]: %d", i, b[i]);
    return 0;
}