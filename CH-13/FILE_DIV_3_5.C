#include <stdio.h>

int main()
{
    FILE *fp;

    fp = fopen("divisible3_5.txt", "w");

    if (fp != NULL)
    {
        printf("file created successfully !!\n\n");

        fprintf(fp, "Number that are divisible by both 3 & 5: ");

        for (int i = 1; i < 50; i++)
        {

            if (i % 3 == 0 && i % 5 == 0)
            {
                fprintf(fp, "%d ", i);
            }
        }
        fclose(fp);
    }
    else
    {
        printf("Your File not created...");
    }

    return 0;
}
