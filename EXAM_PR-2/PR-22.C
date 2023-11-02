#include<stdio.h>
#include<conio.h>
main()
{
      int n;
      clrscr();

      printf("Enter any number: ");
      scanf("%d",&n);

      (n%2==0)
	  ?printf("%d is even !!",n)
	  :printf("%d is odd !!",n);
      getch();
}