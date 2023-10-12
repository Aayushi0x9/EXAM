#include<stdio.h>
#include<conio.h>

main()
{
       float r;
       const float pi = 3.14;
       clrscr();

       printf("Enter circle of radius : ");
       scanf("%f",&r);

       printf("The area of circle is : %.2f",pi*r*r);

       getch();
}