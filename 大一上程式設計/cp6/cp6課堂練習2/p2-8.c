#include <stdio.h>
int main(void)
{
  int x,y;

  for (x=1;x<=9;x++) {
    for (y=9;y>=x;y--)
    printf("%d", y);
  printf("\n");
  }

  return 0;
}
  