#include<stdio.h>
#include<conio.h>
main()
{
    int a,b;
    clrscr();

    printf("Enter number of A: ");
    scanf("%d",&a);
    printf("Enter number of B: ");
    scanf("%d",&b);
    printf("\n---------");
    a=a*b;
    b=a/b;
    a=a/b;
    printf("\nA : %d",a);
    printf("\nB : %d",b);

    getch();
}