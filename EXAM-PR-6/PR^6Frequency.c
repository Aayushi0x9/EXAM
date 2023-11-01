#include <stdio.h>

int main()
{
    char name[100];
    printf("Enter any string: ");
    scanf("%s", &name);
    
    int frcy[256] = {0};
    
    for (int i = 0; name[i] != '\0'; i++) 
    {
        frcy[name[i]]++;
    }
    
    printf("\n\n----: Frequency of each character :----\n\n");
    for (int i = 0; i < 256 ; i++) 
    {
        if (frcy[i] > 0) 
        {
            printf("%c => %d\n", i, frcy[i]);
        }
    }
    return 0;
}