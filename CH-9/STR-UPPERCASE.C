//Write a Program to convert the given string in uppercase without using any string function.

#include<stdio.h>

int main()
{
    char name[50];

    printf("Enter your name : ");
    scanf("%[^\n]",name);

    for (int i = 0; name[i] != '\0'; i++)
    {
        if (name[i]>= 'a' && name[i] <= 'z')
        {
            name[i] -= 32;
        }
    }
    printf("YOUR UPPERCASE NAME : %s",name);
    
    return 0;
}
