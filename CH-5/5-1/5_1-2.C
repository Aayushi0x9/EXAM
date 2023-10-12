#include<stdio.h>
#include<conio.h>
main()
{
     int n;
     clrscr();

     printf("Enter any number: ");
     scanf("%d",&n);

     if(n<0){
	printf("This number is Negative!!");
     }
     else if(n==0){
	printf("This number is Neutral!!");
     }
     else{
	printf("This number is Positive");
     }
     getch();
}