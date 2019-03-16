#include <stdio.h>
int main(void)
{
  int a=0,x,y,xx,yy;
  printf("Enter a fraction (x/y): ");
  scanf("%d/%d", &x,&y);
  xx=x;
  yy=y;

  while (x%y!=0) {
  a=x%y;
  x=y;
  y=a;
  }

  printf("GCD = %d\n", y);
  printf("In lowest terms: %d/%d", xx/y,yy/y);
  return 0;
}