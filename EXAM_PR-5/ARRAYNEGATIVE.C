#include<stdio.h>

int main()
{
    int size;

    printf("ENTER SIZE OF ARRAY : ");
    scanf("%d", &size);
    
    int i, a[size];

    for(i=0; i<size; i++)
    {
        printf("ENTER ARRAY a[%d] : ",i);
        scanf("%d", &a[i]);
    }

    printf("NEGATIVE ELEMENT FROM ARRAY :");
    for(i=0; i<size; i++)
    {
        if(a[i]<0)
        printf("%d",a[i]);
    }

    return 0;
}
