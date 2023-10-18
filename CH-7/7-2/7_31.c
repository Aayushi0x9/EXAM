#include<stdio.h>

main()
{
	int i,j,a;
	
	for(i=1 ; i<=5 ; i++)
	{
		for(a=5 ; a>=i ; a--)
        {
            printf("  ");
        }
		for(j=1 ; j<=i ; j++)
		{
				printf("* ");
		}
        for(j=i-1 ; j>=1 ; j--)
		{
				printf("* ");
		}
        printf("\n");
	}
}