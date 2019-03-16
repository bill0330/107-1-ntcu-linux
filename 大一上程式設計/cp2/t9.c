#include <stdio.h>

#define a 3
#define b 2
#define c 5
#define d 7
#define e 6
int main(void)
{
  int x;
  scanf("%d", &x);
  printf("%d", (a*x*x*x*x*x)+(b*x*x*x *x)-(c*x*x*x)-(x*x)+(d*x)-e);
  return 0;
}