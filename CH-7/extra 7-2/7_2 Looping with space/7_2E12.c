#include<stdio.h>

main()
{
	char i,j,a;
	
	for(i='A' ; i<='E' ; i++)
	{
		for(a='E'; a>i ; a--)
		{
			printf("  ");
		}
		for(j=i ; j>='A' ; j--)
		{
				printf("%c ",j);
		}
		printf("\n");
	}
}
