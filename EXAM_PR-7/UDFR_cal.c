#include <stdio.h>

void sum(int n1, int n2)
{
    printf("Your sum is %d and %d : %d", n1, n2, n1 + n2);
}
void sub(int n1, int n2)
{
    if (n1 > n2)
        printf("Your subtraction is %d and %d : %d", n1, n2, n1 - n2);
    else
        printf("Your subtraction is %d and %d : %d", n1, n2, n2 - n1);
}
void mult(int n1, int n2)
{
    printf("Your multiplication is %d and %d : %d", n1, n2, n1 * n2);
}
void div(int n1, int n2)
{
    if (n1 > n2)
        printf("Your division is %d and %d : %d", n1, n2, n1 / n2);
    else
        printf("Your division is %d and %d : %d", n1, n2, n2 / n1);
}
void mod(int n1, int n2)
{
    if (n1 > n2)
        printf("Your mod is %d and %d : %d", n1, n2, n1 % n2);
    else
        printf("Your mod is %d and %d : %d", n1, n2, n2 % n1);
}
int inputn1(int n1)
{
    printf("\n\nEnter first number : ");
    scanf("%d", &n1);
    return n1;
}
int inputn2(int n2)
{
    printf("\n\nEnter second number : ");
    scanf("%d", &n2);
    return n2;
}
int main()
{

    int choice, n1, n2;
    while(1){
    printf("\nEnter 1 >> Addition");
    printf("\nEnter 2 >> Subtraction");
    printf("\nEnter 3 >> Multiplication");
    printf("\nEnter 4 >> Division");
    printf("\nEnter 5 >> Modulas");
    printf("\nEnter 0 >> Exit");
    
    printf("\nEnter your choice : ");
    scanf("%d", &choice);
    
    if(choice==0)
       break;
    else{
        int n1 = inputn1(n1);
        int n2 = inputn2(n2);
  
    switch (choice)
    {
    case 1:
        sum(n1, n2);
        break;
        
    case 2:
        sub(n1, n2);
        break;
        
    case 3:
        mult(n1, n2);
        break;
        
    case 4:
        div(n1, n2);
        break;
        
    case 5:
        mod(n1, n2);
        break;
        
    default : 
        printf("Enter valid choice !!!");
    }
    }
    }
}