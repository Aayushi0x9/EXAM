#include<stdio.h>
#include<conio.h>
#define P printf
main()
{
      int U;
      float bill;
      clrscr();

      P("Enter Electricity units : ");
      scanf("%d",U);

      if(U>=0||U<=50)
      {
	 bill= U*0.5;
      }

      else if(U>=51||U<=150)
      {
	 bill=25+(U-50)*0.75;
      }

      else if(U>=151||U<=250)
      {
	 bill=100+(U-150)*1.20;
      }

      else if(U>=250)
      {
	 bill=220+(U-250)*1.5;
      }

      else
      {
	printf("invalid !!");
      }
      printf("Your Electricity Bill is : %.2f",bill + (bill * 0.2));

      getch();

}