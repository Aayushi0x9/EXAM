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
		for(j=i; j<=5 ; j++)
		{
			 if(i%2==0)
             {
             	printf("0 ");
			 }
			 else
			{
             	printf("1 ");
			}
		}
		printf("\n");
	}
}
