#include <stdio.h>

int sum(int n){
	int i=0,sum=0;
	if(i<n)
	sum += i;
	i++;
	sum(n);
	return sum; 
}
int main()
{
	int i=1,n;
	printf("\nEnter your number : ");
	scanf("%d",n);
	int sum(n);
	printf("%d",sum);
	
	
	return 0;
}
