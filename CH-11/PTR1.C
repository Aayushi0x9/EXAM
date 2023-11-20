#include <stdio.h>

int main()
{
    int a[5];

    printf("\nint size\t: %lu", sizeof(int));
    printf("\nchar size\t: %lu", sizeof(char));
    printf("\nfloat size\t: %lu", sizeof(float));
    printf("\ndouble size\t: %lu", sizeof(double));
    printf("\nlong int size\t: %lu", sizeof(long int));
    printf("\nlong long int size: %lu", sizeof(long long int));

    int arraysize = sizeof(a) / sizeof(a[0]);
    printf("\nsize of array\t: %d", arraysize);

    return 0;
}
