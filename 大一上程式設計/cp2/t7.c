#include <stdio.h>

#define pi 3.14159f
#define a 4.0f/3.0f
int main(void)
{
  float r, v;
  scanf("%f", &r);
  v = a*pi*r*r*r;
  printf("%.2f", v);

  return 0;
}