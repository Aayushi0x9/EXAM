#include<stdio.h>

main()
{
	int i,j,n=11;
	
	for(i=41 ; i<=45 ; i++)
	{
		for(j=41 ; j<=i ; j++)
		{
			printf("%d ",j);
			n++;
		}
		printf("\n");
	}
	
}
