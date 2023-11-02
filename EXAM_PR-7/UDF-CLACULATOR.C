#include <stdio.h>

void sum(int n1, int n2)
{
    printf("Your sum is %d and %d : %d", n1, n2, n1 + n2);
}
void sub(int n1, int n2)
{
    if (n1 > n2)
        printf("Your subtraction is %d and %d : %d", n1, n2, n1 - n2);
    else
        printf("Your subtraction is %d and %d : %d", n1, n2, n2 - n1);
}
void mult(int n1, int n2)
{
    printf("Your multiplication is %d and %d : %d", n1, n2, n1 * n2);
}
void div(int n1, int n2)
{
    if (n1 > n2)
        printf("Your division is %d and %d : %d", n1, n2, n1 / n2);
    else
        printf("Your division is %d and %d : %d", n1, n2, n2 / n1);
}
void mod(int n1, int n2)
{
    if (n1 > n2)
        printf("Your mod is %d and %d : %d", n1, n2, n1 % n2);
    else
        printf("Your mod is %d and %d : %d", n1, n2, n2 % n1);
}
int inputn1(int n1)
{
    printf("Enter first number : ");
    scanf("%d", &n1);
    return n1;
}
int inputn2(int n2)
{
    printf("Enter second number : ");
    scanf("%d", &n2);
    return n2;
}
int main()
{

    int choice, n1, n2;
menu:
    printf("\nEnter 1 >> Addition");
    printf("\nEnter 2 >> Subtraction");
    printf("\nEnter 3 >> Multiplication");
    printf("\nEnter 4 >> Division");
    printf("\nEnter 5 >> Modulas");
    printf("\nEnter 0 >> Exit");
    printf("\nEnter your choice : ");
    scanf("%d", &choice);

    switch (choice)
    {

    case 1:
    {
        int n1 = inputn1(n1);
        int n2 = inputn2(n2);
        sum(n1, n2);
        goto menu;
    }
    case 2:
    {
        int n1 = inputn1(n1);
        int n2 = inputn2(n2);
        sub(n1, n2);
        goto menu;
    }
    case 3:
    {
        int n1 = inputn1(n1);
        int n2 = inputn2(n2);
        mult(n1, n2);
        goto menu;
    }
    case 4:
    {
        int n1 = inputn1(n1);
        int n2 = inputn2(n2);
        div(n1, n2);
        goto menu;
    }
    case 5:
    {
        int n1 = inputn1(n1);
        int n2 = inputn2(n2);
        mod(n1, n2);
        goto menu;
    }
    case 0:
        break;
    }
}
