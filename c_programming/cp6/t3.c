#include <stdio.h> 
int main(void)
{
  int a,x=0,y=0;
  printf("Enter a number: ");
  scanf("%d", &a);

  while ((x+2)*(x+2)<=a) {
  x +=2;
  y=x*x;
  printf("%d\n", y);
  }

  return 0;
}
  