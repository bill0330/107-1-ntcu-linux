#include <stdio.h>
int main(void)
{
  int n,sum=0,x=1;
  scanf("%d", &n);

  while (x<=n) {
  sum=sum+x;
  x++;
  }

  printf("%d", sum);
  return 0;
}
  
  