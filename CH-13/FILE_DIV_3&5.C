#include <stdio.h>

int main()
{
    FILE *fp;

    int n;

    fp = fopen("divisible3&5.txt", "a");

    if (fp != NULL)
    {
        printf("Enter fle created successfully !!\n\n");

        printf("Enter any number : ");
        scanf("%d", &n);

        if (n % 3 == 0 && n % 5 == 0)
        {
            fprintf(fp, "The given number is divisible by both 3 & 5");
        }
        else
        {
            printf("fp,The given number is not divisible by both 3 & 5");
        }

        fclose(fp);
    }
    else
    {
        printf("Your File not created...");
    }

    return 0;
}
