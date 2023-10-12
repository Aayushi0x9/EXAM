#include<stdio.h>
#include<conio.h>
main()
{
     int n1,n2;
     clrscr();

     printf("Enter a value of the first number: ");
     scanf("%d",&n1);
     printf("Enter a value of the second number: ");
     scanf("%d",&n2);

     if(n1<n2){
	printf("The minimum value is : %d",n1);
     }
     else{
	printf("The minimum value is : %d",n2);
     }

     getch();
}