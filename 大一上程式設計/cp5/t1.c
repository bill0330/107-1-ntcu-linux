#include <stdio.h>
int main(void)
{
  float a,b;
  printf("Enter value of trade: ");
  scanf("%f", &a);

  if(a<2500.00f)
  b = 30.00f+.017f*a;
  else if(a<6250.00f)
  b = 56.00f+.0066f*a;
  else if(a<20000.00f)
  b = 76.00f+.0034f*a;
  else if(a<50000.00f)
  b = 100.00f+.0022f*a;
  else if(a<500000.00f)
  b = 155.00f+.0011f*a;
  else b = 255.00f+.0009f*a;

  if(b<39.00f)
  b = 39.00f;

  printf("Commission: $%.2f", b);
  return 0;
}