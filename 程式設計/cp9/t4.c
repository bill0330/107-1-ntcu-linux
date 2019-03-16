#include <stdio.h>
int number(int n)
{
  return (3*n*n*n*n*n)+(2*n*n*n*n)-(5*n*n*n)-(n*n)+(7*n)-6;
}

int main(void)
{
  int x;

  scanf("%d", &x);
  
  printf("%d", number(x));
  return 0;
}
