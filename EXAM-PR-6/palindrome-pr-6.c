#include <stdio.h>

int main()
{
    char name1[20] ;
    int count = 0, r = 0, i;

    printf("Enter any string: ");
    scanf("%s", &name1);

    for (int i = 0; name1[i] != '\0'; i++)
        count++;
    
    for (int i = 0; i <= count-1; i++ ,count--)
    {
        if (name1[i] != name1[count-1])
            r = 0;
        else
            r = 1;
    }
    if (r == 1)
        printf("GIVEN STRING IS PALINDROME!!");
    else
        printf("GIVEN STRING IS NOT PALINDROME!!");

    return 0;
}