#include <stdio.h>
int main(void)
{
  int i;
  float x;

  scanf("%d%f", &i, &x);

  printf("|%d|%5d|%-5d|%5d|\n", i, i, i, i);
  printf("|%10.3f|%.3e|%-10g|", x, x, x);

  return 0;
}
