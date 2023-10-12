#include<stdio.h>
#include<conio.h>
main()
{
       int a,b,c;
       clrscr();

       printf("Enter number of a: ");
       scanf("%d",&a);
       printf("\nEnter number of b: ");
       scanf("%d",&b);

       c=a;
       a=b;
       b=c;
       printf("a = %d\n",a);
       printf("b = %d\n",b);

       getch();
}
