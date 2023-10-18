#include<stdio.h>

main()
{
    int n,first,last,sum;

    printf("Enter any number: ");
    scanf("%d",&n);

    last = n%10;
    do
    {
	n=n/10;
    }while(n>=10);
    first=n;
    
    printf("Total number of digit : %d",first+last);

}
