#include <stdio.h>
int main(void)
{
  int i,N,sum=0;

  scanf("%d", &N);
  for (i=2;i<=N;i+=2)
  sum +=i;
  printf("%d", sum);

  return 0;
}
  