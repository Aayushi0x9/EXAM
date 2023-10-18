#include<stdio.h>

main()
{
	char i,j,a;
	
	for(i='A' ; i<='E' ; i++)
	{
		for(a='A' ; a<i ; a++)
		{
			printf("  ");
		}
		for(j=i ; j<='E' ; j++)
		{
				printf("%C ",j);
		}
		printf("\n");
	}
}
