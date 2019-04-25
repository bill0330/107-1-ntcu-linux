#include <stdio.h>
int main(void)
{
  int x,a;
  scanf("%d", &x);

  for (a=0;x>0;x -=2) {
  a +=x;
  }

  printf("%d", a);
  return 0;
}