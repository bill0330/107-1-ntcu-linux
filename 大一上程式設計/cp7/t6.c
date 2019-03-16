#include <stdio.h>
int main(void)
{
  char x;
  float a,b;
  printf("Enter an expression (example: 1+2.5*3):  ");
  scanf("%f", &a);
  scanf("%c", &x);
  b=a;

  while (x!='\n') {
  scanf("%f", &a);
    if (x=='+')
    b+=a;
    else if (x=='-')
    b-=a;
    else if (x=='*')
    b*=a;
    else if (x=='/')
    b/=a;
  scanf("%c", &x);
  }
  printf("Value of expression: %.1f", b);
  return 0;
}

  