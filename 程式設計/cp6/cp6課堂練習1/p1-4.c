#include <stdio.h>
int main(void)
{
  int n,x=1;
  printf("This program prints a table of squares.\n");
  printf("Enter number of entries in table: \n");
  scanf("%d", &n);

  while (x<=n) {
  printf("%10d%10d%10d\n", x,x*2,x*3);
  x++;
  }

  return 0;
}