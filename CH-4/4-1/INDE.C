#include<stdio.h>
#include<conio.h>
main()
{
     int n;
     clrscr();

     printf("Enter any number: ");
     scanf("%d",&n);

     printf("Increment: %d\n",++n);
     printf("Decrement: %d\n",--n);

     getch();
}