#include<stdio.h>
#include<conio.h>
main()
{
     char c;
     clrscr();

     printf("Enter any Character: ");
     scanf("%c",&c);

     if(c=='a'|| c=='A'||c=='e'||c=='E'||c=='i'||c=='I'||c=='o'||c=='O'||c=='u'||c=='U'){
	printf("This Character is vowel!!");
     }
     else{
	printf("This Character is console");
     }
     getch();
}