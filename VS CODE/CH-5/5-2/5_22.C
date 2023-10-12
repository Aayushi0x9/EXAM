#include<stdio.h>
#include<conio.h>
#define P printf
main()
{
    int a,b,c,d;
    clrscr();

    P("Enter number of A: ");
    scanf("%d",&a);
    P("Enter number of B: ");
    scanf("%d",&b);
    P("Enter number of C: ");
    scanf("%d",&c);
    P("Enter number of D: ");
    scanf("%d",&a);

    if(a==b && b==c && c==a && d==a && d==b && d==c)
    {
	P("%d,%d,%d & %d are same !!",a,b,c,d);
    }
    else if(a>b)
    {
	if(a>c)
	{
	   P("The minimum value is: %d",a);
	}
	else
	{
	   P("The minimum value is: %d",c);
	}
    }
    else
    {
	if(b>c)
	{
	   P("The minimum value is: %d",b);
	}
	else
	{
	   P("The minimum value is: %d",c);
	}
    }

    getch();
}