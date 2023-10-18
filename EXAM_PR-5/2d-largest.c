#include<stdio.h>

int main()
{
    int r, c, i, j;

    printf("ENTER SIZE OF ROW : ");
    scanf("%d", &r);
    printf("ENTER SIZE OF COLUMN: ");
    scanf("%d", &c);

    int a[r][c];

    for(i=0; i<r; i++)
    {
        for(j=0; j<c; j++)
        {
            printf("ENTER ARRAY a[%d][%d] : ",i,j);
            scanf("%d", &a[i][j]);
        }
        printf("\n");
    }

    int max=a[0][0];

    for(i=0; i<r; i++)
    {
        for(j=0; j<c; j++)
        {
            if(a[i][j]>max)
           max  = a[i][j];
        }
    }

    printf("THE LARGEST NUMBER OF ARRAY IS: %d",max);
}