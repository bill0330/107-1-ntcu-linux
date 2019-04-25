#include <stdio.h>
int main(void)
{
  int a,b;
  printf("Enter a number: ");
  scanf("%d", &a);

  if(a<10 && a>0)
  b = 1;
  else if(a<100 && a>=10)
  b = 2;
  else if(a<1000 && a>=100)
  b = 3;
  else if(a<10000 && a>=1000)
  b = 4;
  else b = 0;

  if (b>1)
  printf("The number %d has %d digits", a,b);
  else if (b == 1)
  printf("The number %d has %d digit", a,b);
  else 
  printf("請輸入1到9999之間的整數");
  return 0;
}

