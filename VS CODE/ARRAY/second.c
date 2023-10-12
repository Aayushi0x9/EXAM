#include<stdio.h>

int main()
{
    int i,n,a[n];

    printf("Enter array size: ");
    scanf("%d",&n);

    for(i=0 ; i<=n ; i++)
    {
        printf("\nARRAY IS a[%d] = ",i);
        scanf("%d",&a[n]);
    }

    for(i=0 ; i<=n ; i++)
    {
        printf("\nArray is a[%d] = %d",i,a[n]);
    }
    
    return 0;
}
