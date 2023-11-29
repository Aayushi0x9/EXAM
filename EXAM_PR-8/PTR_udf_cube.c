#include <stdio.h>

void arrayinput(int size)
{
  int a[size][size];

  for (int i = 0; i < size; i++)
  {
    for (int j = 0; j < size; j++)
    {
      printf("a[%d][%d] : ", i, j);
      scanf("%d", &a[i][j]);
    }
  }
}
int cube(int size, int a[size][size])
{
  int i, j, *ptra[size][size];
  for (int i = 0; i < size; i++)
  {
    for (int j = 0; j < size; j++)
    {
      ptra[i][j] = &a[i][j];
      *ptra[i][j] = a[i][j] * a[i][j] * a[i][j];
    }
  }
  for (int i = 0; i < size; i++)
  {
    for (int j = 0; j < size; j++)
    {
      printf("%d ", *ptra[i][j]);
    }
    printf("\n");
  }
  return 0;
}
int main()
{
  int size, a[size][size];

  printf("Enter the array size : ");
  scanf("%d", &size);

  printf("\n\nEnter array Elements :\n");
  arrayinput(size);
  cube(size, a[size][size]);
}