#include<stdio.h>
#include<conio.h>
main()
{
      int S,HRA,DA,TA,A;
      clrscr();

      printf("Enter your Base Salary: ");
      scanf("%d",&S);
      printf("HRA: ");
      scanf("%d",&HRA);
      printf("DA: ");
      scanf("%d",&DA);
      printf("TA: ");
      scanf("%d",&TA);

      A=S+HRA+DA+TA;
      printf("Rs. %d",(A*100)/S);

      getch();
}