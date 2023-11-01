#include <stdio.h>

int main()
{
    char name1[20], name2[20];
    int count, run = 0;
    printf("Enter string 1 : ");
    scanf("%s", &name1);
    printf("Enter string 2 : ");
    scanf("%s", &name2);

    for (int i = 0; name1[i] != '\0'; i++)
        count++;
    for (int i = 0; name1[i] != '\0'; i++)
    {
        for (int j = 0; name2[j] != '\0'; j++)
        {
            if (name1[i] == name2[j])
            {
                run = 1;
                i++;
                j++;
            }
            else
            {
                run = 0;
            }
        }
    }
    if (run == 1)
        printf("COMPARE SUCCESSFULLY!!");
    else
        printf("NOT COMPARE SUCCESSFULLTY!!");

    return 0;
}
