#include <stdio.h>
int main(void)
{
  int a;
  printf("Enter wind speed (knots): ");
  scanf("%d", &a);

  if (a<1)
  printf("Wind force at %d knots is Calm", a);
  else if (a>0 && a<4)
  printf("Wind force at %d knots is Light air", a);
  else if (a>3 && a<28)
  printf("Wind force at %d knots is Breeze", a);
  else if (a>27 && a<48)
  printf("Wind force at %d knots is Gale", a);
  else if (a>47 && a<64)
  printf("Wind force at %d knots is Storm", a);
  else
  printf("Wind force at %d knots is Hurricane", a);
  return 0;
}