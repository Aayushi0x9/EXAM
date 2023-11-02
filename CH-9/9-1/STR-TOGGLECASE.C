//Write a Program to convert the given string in toggle case without using any string function.

#include<stdio.h>

int main()
{
    char name[50];

    printf("Enter your name : ");
    scanf("%[^\n]",name);

    for (int i = 0; name[i] != '\0'; i++)
    {
        if (name[i]>= 'A' && name[i] <= 'Z')
        {
            name[i] += 32;
        }
        else
        {
            name[i] -= 32;
        }
    }
    printf("TOGGLE CASE IN YOUR NAME : %s",name);
    
    return 0;
}