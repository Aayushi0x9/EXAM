#include<stdio.h>

main()
{
	int i,j,a;
	
	for(i=5 ; i>=1 ; i--)
	{
		for(a=5 ; a>i ; a--)
		{
			printf("  ");
		}
		for(j=i ; j>=1 ; j--)
		{
				printf("%d ",j);
		}
		printf("\n");
	}
}