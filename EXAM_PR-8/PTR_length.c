#include <stdio.h>

int main() {
    char name[20], *ptr[20];
    
    printf("Enter any string : ");
    scanf("%[^\n]", name);
    int i, count = 0;
    
    for(i = 0; name[i] != '\0'; i++)
    ptr[i] = &name[i];
    
    while (ptr[count] != '\0') {
        count++;
    }
    
    printf("The length of a string is: %d\n", count);
    
    return 0;
}