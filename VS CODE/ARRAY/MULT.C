#include<stdio.h>

int main()
{
    int i,n;

    printf("Enter size of array : ");
    scanf("%d",&n);

    int a[n],b[n],c[n];

    printf("\n\n----: Enter array of A :----\n");
    for(i=0 ; i<n ; i++)
    {
        printf("Enter array a[%d] : ",i);
        scanf("%d",&a[i]);
    }

    printf("\n\n----: Enter array of B :----\n");
    for(i=0 ; i<n ; i++)
    {
        printf("Enter array b[%d] : ",i);
        scanf("%d",&b[i]);
    }
    
    printf("\n\n----: Mult of Array A and Array B :----\n");
    for(i=0 ; i<n ; i++)
    {
        printf("\nEnter array c[%d] = %d",i,a[i]*b[i]);
    }

    return 0; 
}