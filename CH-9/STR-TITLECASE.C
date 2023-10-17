//Write a Program to convert the given string in Title Case.

#include<stdio.h>

int main()
{
    char name[50];

    printf("Enter your name : ");
    scanf("%[^\n]",name);

    for (int i = 0; name[i] != '\0'; i++)
    {
        if (i==0)
        {
            name[i] -= 32;
        }
    }
    printf("YOUR TITLECASE NAME : %s",name);
    
    return 0;
}
