#include <stdio.h>

int main()

{
  char a[5];

  for (int i = 0; i < 5; i++)
  {
    scanf("%c", &a[i]);

    //
  }
  for (int i = 0; i < 5; i++)
  {
    /* code */

    a[i] *= 5;
  }

  for (int i = 0; i < 5; i++)
  {
    /* code */
    printf("%d ", a[i]);
  }

  return 0;
}