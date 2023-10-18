#include<stdio.h>

main()
{
	int i,j,a;
	
	for(i=5 ; i>=1 ; i--)
	{
		for(j=1 ; j<=i ; j++)
		{
				printf("%d ",j);
		}
		for(a=5 ; a>i ; a--)
		{
			printf("    ");
		}
		for(j=i ; j>=1 ; j--)
		{
				printf("%d ",j);
		}
		printf("\n");
	}
}
