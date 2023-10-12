#include<stdio.h>
#include<conio.h>
main()
{
     int a,b;
     clrscr();

     printf("Enter number of a: ");
     scanf("%d",&a);
     printf("Enter number of b: ");
     scanf("%d",&b);

     printf("\n------------------------------");
     if(b>a){
     printf("\nAddition of %d and %d of answer: %d\n",a,b,a+b);
     printf("Subtraction of %d and %d of answer: %d\n",b,a,b-a);
     printf("Multiplication of %d and %d of answer: %d\n",a,b,a*b);
     printf("Divition of %d and %d of answer: %d\n",b,a,b/a);
     printf("Modules of %d and %d of answer: %d\n",b,a,b%a);
     }
     else{
     printf("\nAddition of %d and %d of answer: %d\n",a,b,a+b);
     printf("Subtraction of %d and %d of answer: %d\n",a,b,a-b);
     printf("Multiplication of %d and %d of answer: %d\n",a,b,a*b);
     printf("Divition of %d and %d of answer: %d\n",a,b,a/b);
     printf("Modules of %d and %d of answer: %d\n",a,b,a%b);
     }
     getch();
}