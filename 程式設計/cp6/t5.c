#include <stdio.h>
int main(void)
{
  int a=0,x=1;

  while (x!=0) {
  scanf("%d", &x);
    if (x>0)
    a +=x;
    else if (x<0)
    continue;
  }

  printf("%d", a);
  return 0;
}
    

  