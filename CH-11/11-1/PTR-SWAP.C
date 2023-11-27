#include <stdio.h>

int main()
{
    int a, b, c;

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

    c = *ptra;
    *ptra = *ptrb;
    *ptrb = c;

    printf("\n----: After swapping :----\n\n");
    printf("A = %d\n", a);
    printf("B = %d", b);
    return 0;
}