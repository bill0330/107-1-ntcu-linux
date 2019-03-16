#include <stdio.h>
int main(void)
{
  int x,a,b,c,d,e,f,g,h,i;
  printf("Enter a number between 0 and 32767:");
  scanf("%5d", &x);

  a = x%8;
  b = x/8;
  c = b%8;
  d = b/8;
  e = d%8;
  f = d/8;
  g = f%8;
  h = f/8;
  i = h%8;

  printf("In octal, your number is:%d%d%d%d%d", i,g,e,c,a);
  return 0;
}
  

  
