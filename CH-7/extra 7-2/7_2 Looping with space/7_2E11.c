#include<stdio.h>

main()
{
	int i,j,a;
	
	for(i=1 ; i<=5 ; i++)
	{
		for(a=5 ; a>i ; a--)
		{
			printf("  ");
		}
		for(j=i ; j>=1 ; j--)
		{
				printf("* ");
		}
		printf("\n");
	}
}
