#include<stdio.h>
#include<conio.h>
main()
{
    int n,first,last,a;
    clrscr();

    printf("Enter any number: ");
    scanf("%d",&n);

    last = n%10;
    while(n>10)
    {
	a=n/10;
    }
    first=a;
    printf("Total number of digit : %d",first+last);

    getch();
}