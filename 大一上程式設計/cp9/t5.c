#include <stdio.h>
long F(long n)
{
  if(n<2) return 1;
  return F(n-1)+F(n-2);
}

int main(void)
{
  long n;

  for (;;) {
  scanf("%ld",&n);
  if (n==(-1))
    break;
  else  printf("%ld\n", F(n));  
  } 
  return 0;
}
