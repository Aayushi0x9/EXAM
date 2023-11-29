#include <stdio.h>

int main()
{

    int n, sum = 0;

    printf("Enter any number : ");
    scanf("%d", &n);

    for (int i = 1; i <= 10; i++)
    {
        printf("\t\t\t\n%d * %d = %d", n, i, n * i);
    }

    return 0;
}