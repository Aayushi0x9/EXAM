#include <stdio.h>

int main() 
{
    int fy,ey,i;
    printf("Enter first year: ");
    scanf("%d", &fy);
    printf("Enter end year: ");
    scanf("%d", &ey);

    int a[i];
    
    printf("\nEnter array elements:\n\n");
    for (i = fy; i <= ey; i++) 
    {   
        if(i%4==0)
        {
            a[i]=i;
        }
    }
    
    printf("__________________\n");
    printf("\nleap year is : ");
    
    for(i = fy; i <= ey ; i++)
    {
         printf("%d ",a[i]);
    }
    return 0;   
}