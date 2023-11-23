#include <stdio.h>

int main()
{
    int r, c;

    printf("ENTER SIZE OF ROW : ");
    scanf("%d", &r);
    printf("ENTER SIZE OF COLUMN: ");
    scanf("%d", &c);

    int a[r][c], i, j;

    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            printf("ENTER ARRAY a[%d][%d] : ", i, j);
            scanf("%d", &a[i][j]);
        }
    }

    printf("-----: THE MATRIX :-----\n\n");
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    printf("-----: THE TRANSPOSE MATRIX :-----\n\n");
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            printf("%d ", a[j][i]);
        }
        printf("\n");
    }
}