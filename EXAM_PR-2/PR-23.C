#include <stdio.h>
#include <conio.h>
int main()
{
  int n1, n2, n3, n4;

  printf("Enter first number: ");
  scanf("%d", &n1);
  printf("Enter second number: ");
  scanf("%d", &n2);
  printf("Enter third number: ");
  scanf("%d", &n3);
  printf("Enter fourth number: ");
  scanf("%d", &n4);

  if (n1 > n2)
  {
    if (n1 > n3)
    {
      if (n1 > n4)
      {
        printf("%d is maximum!!", n1);
      }
      else
      {
        printf("%d is maximum!!", n4);
      }
    }
    else
    {
      if (n3 > n4)
        printf("%d is maximum!!", n3);
      else
        printf("%d is maximum!!", n4);
    }
  }
  else
  {
    if (n2 > n3)
    {
      if (n2 > n4)
      {
        printf("%d is maximum!!", n2);
      }
      else
      {
        printf("%d is maximum!!", n4);
      }
    }
    else
    {
      if (n3 > n4)
        printf("%d is maximum!!", n3);
      else
        printf("%d is maximum!!", n4);
    }
  }
  return 0;
}