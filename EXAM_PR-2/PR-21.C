#include<stdio.h>
#include<conio.h>
main()
{
     char c = 'a';
     clrscr();

     printf("Enter any character: ");
     scanf("%c",&c);

     if(c>='A'||c<='Z'&& c>='a'||c<='z')
     {
	 printf("%c is Alphabet !!",c);
     }
     else if(c>='0'||c<='9')
     {
	 printf("%c is digit",c);
     }
     else
     {
	 printf("%c is special character!!",c);
     }
     getch();
}