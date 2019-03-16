#include <stdio.h>
int main(void)
{
  int x,y,a;
  scanf("%d", &x);
  scanf("%d", &y);

  for (a=0;x>0;x=x-y) {
  a=a+x;
  }

  printf("%d", a);
  return 0;
}
  