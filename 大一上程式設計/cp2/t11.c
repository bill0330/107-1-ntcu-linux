#include <stdio.h>
int main(void)
{
  float money, a, b, c, d, e;
 
  scanf("%f", &money);
  scanf("%f", &a);
  scanf("%f", &b);

  c = money*(1+0.01f*a/12)-b;
  d = c*(1+0.01f*a/12)-b;
  e = d*(1+0.01f*a/12)-b;

  printf("$%.2f\n", c);
  printf("$%.2f\n", d);
  printf("$%.2f", e);
  return 0;
}