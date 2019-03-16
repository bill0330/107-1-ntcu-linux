#include <stdio.h>
int main(void)
{
  int i,x,sum=0;

  scanf("%d", &x);
  for (i=1;i<=x;i++)
  sum +=i;
  printf("%d", sum);

  return 0;
}
  