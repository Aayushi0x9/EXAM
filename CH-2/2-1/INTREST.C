#include<stdio.h>
#include<conio.h>

main()
{
       int p,r,n,a=100;
       clrscr();

       printf("Enter your intrest of p : ");
       scanf("%f",&p);
       printf("Enter your intrest of r : ");
       scanf("%f",&r);
       printf("Enter your intrest of n : ");
       scanf("%f",&n);

       printf("Your interest is : %d",p*r*n/a);

       getch();
}
