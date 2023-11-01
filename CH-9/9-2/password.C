#include <stdio.h>

int main()
{
    char password[6];
    int count = 0, i;
    printf("Enter your password : ");
    scanf("%s", &password);

    for (i = 0; password[i] != '\0'; i++)
        count++;

    if (count >= 6)
    {
        if (password[i] >= 65 && password[i] <= 90 && password[i] >= 97 && password[i] <= 122 && password[i] >= 48 && password[i] <= 57 && password[i] >= 58 && password[i] <= 64 && password[i] >= 33 && password[i] <= 47)
            printf("Your password is strong!!\n");
        else
            printf("Your password is not strong!!\n");
    }
    else
        printf("Enter 6 character password!!");

    return 0;
}
