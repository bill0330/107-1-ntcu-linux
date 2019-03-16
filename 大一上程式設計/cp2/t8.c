#include <stdio.h>

#define a 1.05f
int main(void)
{
  float amount;
  scanf("%f", &amount);
  printf("%.2f", amount * a);
  return 0;
}
