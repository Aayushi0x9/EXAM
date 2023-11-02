#include <stdio.h>

void arrayinput(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("Enter array a[%d] : ", i);
        scanf("%d", &a[i]);
    }
}

void arrayoutput(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("\nEnter array a[%d] : %d", i, a[i]);
    }
}

int arraysum(int a[], int n)
{
    int sum = 0;

    for (int i = 0; i < n; i++)
        sum += a[i];

    return sum;
}

int main()
{
    int n, sum;

    printf("Enter size of array : ");
    scanf("%d", &n);
    int a[n];
    printf("\n\n----: Enter array of A :----\n\n");
    arrayinput(a, n);

    printf("\n\n----: your array of A :----\n\n");
    arrayoutput(a, n);

    printf("\n\n----: Array sum :----\n");
    sum = arraysum(a, n);

    printf("\nArray sum is %d\n\n", sum);

    return 0;
}