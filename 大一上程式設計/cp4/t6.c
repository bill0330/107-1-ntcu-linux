#include <stdio.h>
int main(void)
{
  int x, a,b,c,d,e, f,g,h,i,j, aa,bb,cc;
  printf("Enter the first 11 digits of a UPC:");
  scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d",
         &x,&a,&b,&c,&d,&e,&f,&g,&h,&i,&j);

  aa = x+b+d+f+h+j;
  bb = a+c+e+g+i;
  cc = 3*aa+bb;

  printf("Check digit:%d", 9-((cc-1)%10));
  return 0;
}