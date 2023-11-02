#include <stdio.h>
#include <string.h>

int main() 
{
    char email[50] ;
    char password[20] ;

    printf("Enter your email: ");
    scanf("%s", email);

    printf("Enter your password: ");
    scanf("%s", password);

    if (strcmp(email, "aayushi2205@gmail.com")==0 &&strcmp(password, "Aayu@2205")==0)
    {
        printf("Login successfull !!\n");
    } else {
        printf("Login failed! Invalid email or password.\n");
        }

    return 0;
}