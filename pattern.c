#include <stdio.h>

int main()

{
  int n = 7;
  for (int i = 1; i <= 7; i++)
  {
    for (int j = 1; j <= n - i; j++)
    {
      printf(" ");
    }

    for (int j = 1; j <= i; j++)
    {
      printf("%d", j);
    }
    printf("\n");
  }

  return 0;
}