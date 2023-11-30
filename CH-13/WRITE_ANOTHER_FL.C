#include <stdio.h>

int main()
{
    FILE *fp;

    char email[20], psw[20];

    fp = fopen("demo.txt", "r");

    if (fp != NULL)
    {
        printf("Enter fle created successfully !!\n\n");

        printf("Enter your email : ");
        scanf("%s", &email);
        printf("Enter your password : ");
        scanf("%s", &psw);

        fprintf(fp, "Email\t: %s\n", email);
        fprintf(fp, "Password\t: %s\n", psw);

        fclose(fp);
    }
    else
    {
        printf("Your File not created...");
    }

    return 0;
}
