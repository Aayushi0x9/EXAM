#include<stdio.h>

main()
{
	int i,j,a;
	
	for(i=5 ; i>=1 ; i--)
	{
		for(a=1 ; a<=i ; a++)
        {
             printf("  ");
        }
        for(j=5 ; j>=i ; j--)
        {
             if(j%2==0)
             {
             	printf("- ");
			 }
			 else
			{
             	printf("| ");
			}
        }
        
        printf("\n");
	}
}
