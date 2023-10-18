#include<stdio.h>
#include<conio.h>
main()
{
      int c;
      float a;
      clrscr();

      printf("Enter the temperature of celcius: ");
      scanf("%d",&c);

      a = c*1.8;

      printf("The temperature of fehranhiet: %.1f\n",a+32);

      getch();
}