#include<stdio.h>
#include<conio.h>
main()
{
    int a,b,c;
    clrscr();

    printf("Enter Triangle of First Angle: ");
    scanf("%d",&a);
    printf("Enter Triangle of Second Angle: ");
    scanf("%d",&b);

    c=a+b;
    printf("Third Angle : %d",180-c);

    getch();
}