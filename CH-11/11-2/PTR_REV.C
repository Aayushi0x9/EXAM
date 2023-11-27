#include <stdio.h>

int main()
{
    int size;
    
    printf("Enter the array size : ");
    scanf("%d",&size);
    
    int a[size];
    printf("\n\nEnter array Elements :\n");
    for(int i = 0; i < size; i++)
    {
        printf("a[%d] : ",i);
        scanf("%d",&a[i]);
    }
    int *ptra[size], **ptrb[size];
    for(int i = 0; i < size; i++)
    {
    ptra[i] = &a[i];
    }
    
    for(int i = 0; i < size; i++)
    {
    ptrb[i] = &ptra[i];
    }
    printf("\n\nReverse array Element :\n");
    for(int i = size-1; i >=0; i--)
    {
       printf("%d ",**ptrb[i]); 
    }
    return 0;
}