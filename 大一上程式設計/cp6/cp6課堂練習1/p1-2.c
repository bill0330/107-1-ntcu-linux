#include <stdio.h>
int main(void)
{
  int n=1,sum=0;

  while (n<=10) {
  sum+=n;
  n++;
  }

  printf("%d", sum);
  return 0;
}
