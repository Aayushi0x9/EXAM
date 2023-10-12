#include<stdio.h>
#include<conio.h>
#define P printf
main()
{
    int a,b,c;
    clrscr();

    P("Enter number of a: ");
    scanf("%d",&a);
    P("Enter number of b: ");
    scanf("%d",&b);
    P("Enter number of c: ");
    scanf("%d",&c);

    if(a==b && b==c && c==a)
    {
	P("%d,%d & %d are same !!",a,b,c);
    }

    else if(a==b)
    {
	 if(a>c)
	 {
		P("A:%d & B:%d are same !!",a,b);
	 }
	 else
	 {
		P("The minimum value is: %d",c);
	 }
    }

    else if(a==c)
    {
	 if(a>b)
	 {
		P("A:%d & C:%d are same !",a,c);
	 }
	 else
	 {
		P("The minimum value is: %d",b);
	 }
    }

    else if(c==b)
    {
	 if(b>a)
	 {
		P("B:%d & C:%d are same !!",b,c);
	 }
	 else
	 {
		P("The minimum value is: %d",a);
	 }
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