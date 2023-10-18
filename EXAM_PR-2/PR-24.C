#include<stdio.h>
#include<conio.h>
#define P printf
main()
{
      char c;
      clrscr();

      P("Enter...\n");
      P("Press M for Monday !!\n");
      P("Press T for Monday !!\n");
      P("Press W for Monday !!\n");
      P("Press t for Monday !!\n");
      P("Press F for Monday !!\n");
      P("Press S for Monday !!\n");
      P("Press s for Monday !!\n");

      P("\nEnter any character : ");
      scanf("%c",&c);
      P("---------------\n");

      switch(c)
      {
	 case 'M':
	     P("Monday !!");
	     break;
	 case 'T':
	     P("Tuesday !!");
	     break;
	 case 'W':
	     P("Wednesday !!");
	     break;
	 case 't':
	     P("Thursday !!");
	     break;
	 case 'F':
	     P("Friday !!");
	     break;
	 case 'S':
	     P("Saturday !!");
	     break;
	 case 's':
	     P("Sunday !!");
	     break;
	 default:
	     P("Enter valid character!!");
	     break;
      }
      getch();
}





