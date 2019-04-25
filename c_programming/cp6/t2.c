#include <stdio.h>
int main(void)
{
  int x,y,a=0  ;
  printf("Enter two integers: \n");
  scanf("%d %d", &x,&y);

  while(x%y!=0) {
  a=x%y;
  x=y;
  y=a;
  }

  printf("Greatest common divisor: %d", y);
  return 0;
}

  
