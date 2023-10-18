#include<stdio.h>

main()
{
	int i,j,a=1;
	
	for(i=1 ; i<=6 ; i++)
	{
		
		for(j=1 ; j<=6 ; j++)
		{
			if(j==1||j==6||j==a)
			{
			    printf("* ");
			}
			else
			{
			    printf("  ");
			}		
		}
		a++;
	    printf("\n");
	}
}
