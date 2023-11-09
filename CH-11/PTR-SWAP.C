#include <stdio.h>

int main()
{
    int a, b;

    printf("Enter the value of A : ");
    scanf("%d", &a);
    printf("Enter the value of B : ");
    scanf("%d", &b);

    printf("\n----: Before swapping :----\n\n");
    printf("A = %d\n", a);
    printf("B = %d", b);

    int *ptra, *ptrb;

    ptra = &a;
    ptrb = &b;

    *ptra = *ptra + *ptrb;
    *ptrb = *ptra - *ptrb;
    *ptra = *ptra - *ptrb;

    printf("\n----: After swapping :----\n\n");
    printf("A = %d\n", *ptra);
    printf("B = %d", *ptrb);
    return 0;
}
