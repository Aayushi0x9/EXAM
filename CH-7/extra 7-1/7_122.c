#include<stdio.h>

main()
{
	char i,j,a='A';
	for(i='A' ;i<='E' ;i++)
	{
		for(j='A' ;j<=i ;j++ )
		{
			printf("%c ",a);
			a++;
		}
		printf("\n");
	}
}
