#include <stdio.h>
int main(void)
{
  float a,b;
  printf("Enter amount of taxable income: ");
  scanf("%f", &a);

  if (a<750 && a>0)
  b = .01f*a;
  else if (a>=750 && a<=2250)
  b = 7.50f + .02f*(a-750);
  else if (a>=2250 && a<=3750)
  b = 37.50f + .03f*(a-2250);
  else if (a>=3750 && a<=5250)
  b = 82.50f + .04f*(a-3750);
  else if (a>=5250 && a<=7000)
  b = 142.50f + .05f*(a-5250);
  else
  b = 230.00f + .06f*(a-7000);

  printf("Tax due is: $%.2f", b);
  return 0;
}