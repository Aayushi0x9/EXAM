#include <stdio.h>

int main()
{
    char password[6];
    int count = 0, i, a, b, c, d;
    printf("Enter your password : ");
    scanf("%s", &password);

    for (i = 0; password[i] != '\0'; i++)
        count++;
        
    for (i = 0; password[i] != '\0'; i++)
    {
        if (count >= 6)
        {
            if (password[i] >= 65 && password[i] <= 90)
                a = 1;
            else if (password[i] >= 97 && password[i] <= 122)
                b = 1;
            else if (password[i] >= 48 && password[i] <= 57)
                c = 1;
            else
                d = 1;
        }
    }

    if (a == 1 && b == 1 && c == 1 && d == 1)
        printf("Password is Strong !!");
    else
        printf("Password is not Strong !!");

    return 0;
}
