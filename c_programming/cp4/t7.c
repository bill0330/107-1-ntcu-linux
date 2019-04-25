#include <stdio.h>
int main(void)
{
  int a,b,c,d,e,f,g,h,i,j,k,l, aa,bb,cc;
  printf("Enter the first 12 digits of an EAN:");
  scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d",
         &a,&b,&c,&d,&e,&f,&g,&h,&i,&j,&k,&l);

  aa = (b+d+f+h+j+l);
  bb = (a+c+e+g+i+k);
  cc = 3*aa+bb;

  printf("Check digit:%d", 9-((cc-1)%10));
  return 0;
}