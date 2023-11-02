#include <stdio.h>

int stringLength(char a[])
{
    int count = 0;
    while (a[count] != '\0')
    {
        count++;
    }
    return count;
}

int main()
{
    char name[100];

    printf("Enter any string: ");
    scanf("%s", name);

    int length = stringLength(name);

    printf("\nLength is: %d", length);

    return 0;
}