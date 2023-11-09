#include <stdio.h>

void decimalToBinary(int n) 
{
    int r,i ,bin[20],size=0;
        while(n!=0)
        {
        r = n % 2;
        bin[size] = r;
        size++;
        n = n / 2;
        }
        
        for(int i=size-1; i>=0; i--)
        {
        printf("%d",bin[i]);
        }
           
}
int main() 
{
    int dcml;
    printf("Enter decimal number: ");
    scanf("%d", &dcml);
    printf("The Binary value is: ");
    
    decimalToBinary(dcml);
    
    return 0;
}