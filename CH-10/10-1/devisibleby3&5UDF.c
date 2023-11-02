#include <stdio.h>

void division(int num) 
{
    if (num % 3 == 0 && num % 5 == 0) 
    {
        printf("The given number is divisible by both 3 & 5");
    }
    else 
    {
        printf("The given number is not divisible by both 3 & 5");
    }
}

int main() {
    int n;
    printf("Enter any number : ");
    scanf("%d", &n);
    printf("\n\n------: Answer :------\n\n");
    
    division(n);
    
    return 0;
}