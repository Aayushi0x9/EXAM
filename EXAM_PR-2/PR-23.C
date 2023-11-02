#include<stdio.h>
#include<conio.h>
main()
{
      int n1,n2,n3,n4;
      clrscr();

      printf("Enter first number: ");
      scanf("%d",&n1);
      printf("Enter second number: ");
      scanf("%d",&n2);
      printf("Enter third number: ");
      scanf("%d",&n3);
      printf("Enter fourth number: ");
      scanf("%d",&n4);

      if(n1>n2)
      {
	 if(n1>n3)
	 {
	   if(n1>n4)
	   {
	       printf("%d is maximum!!",n1);
	   }
	   else
	   {
		printf("%d is maximum!!",n4);
	   }
	  }
	  else
	  {
	    printf("%d is maximum!!",n3);
	  }
      }
      else
      {
	 printf("%d is maximum!!",n2);
      }

      getch();
}