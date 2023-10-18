#include<stdio.h>

int main()
{
    int r,c,sizer,sizec;

    printf("ENTER SIZE OF ROW : ");
    scanf("%d", &r);
    printf("ENTER SIZE OF COLUMN: ");
    scanf("%d", &c);
    printf("\n");
    int a[r][c], i, j;

    for(i=0; i<r; i++)
    {
        for(j=0; j<c; j++)
        {
            printf("ENTER ARRAY a[%d][%d] : ",i,j);
            scanf("%d", &a[i][j]);
        }
        printf("\n");
    }
    
    printf("\n------------------------\n");
    printf("\n\nENTER ROW NUMBER: ");
    scanf("%d",&sizer);
    printf("ELEMENT OF ROW: ");
    
        for(j=0; j<c; j++)
        {
            printf("%d ",a[sizer][j]);
        }
    
     int rsum=0;
    
        for(j=0; j<c; j++)
        {
            rsum+=a[sizer][j];
        }
    
    printf("\nARRAY ROW SUM IS : %d",rsum);

    printf("\n------------------------\n\n");
    printf("\nENTER COLUMN NUMBER: ");
    scanf("%d",&sizec);
    printf("\nELEMENT OF COLUMN: ");
    for(i=0; i<r; i++)
    {
            printf("%d ",a[i][sizec]);
    }
    
    int csum=0;
    for(i=0; i<r; i++)
    {
        for(i=0; i<c; i++)
        {
            csum+=a[i][sizec];
        }
    }
         printf("\nARRAY COLUMN SUM IS : %d",csum);
}