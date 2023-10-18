#include<stdio.h>

main()
{
	char i,j,a;
	
	for(i='E' ; i>='A' ; i--)
	{
		for(a='E' ; a>i ; a--)
		{
			printf("  ");
		}
		for(j='A' ; j<=i ; j++)
		{
				printf("%C ",j);
		}
		printf("\n");
	}
}
