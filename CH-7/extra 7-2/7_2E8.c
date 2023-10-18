#include<stdio.h>

main()
{
	int i,j,a;
	
	for(i=1 ; i<=5 ; i++)
	{
		for(a=1 ; a<i ; a++)
		{
			printf("  ");
		}
		for(j=5 ; j>=i ; j--)
		{
				printf("%d ",j);
		}
		printf("\n");
	}
}
