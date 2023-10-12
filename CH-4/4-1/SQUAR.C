#include<stdio.h>
#include<conio.h>
main()
{
       int x,y;
       clrscr();

       printf("Enter number of x: ");
       scanf("%d",&x);
       printf("\nEnter number of y: ");
       scanf("%d",&y);

       printf("Your calculation of (x+y)^2 is : %d",(x*x)+(2*x*y)+(y*y));

       getch();
}