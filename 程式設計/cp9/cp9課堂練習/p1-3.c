#include <stdio.h>
double average(double a, double b)
{
  if (a-b>0)
  return a;
  else 
  return b;
}

int main(void)
{
  double x, y;

  scanf("%lf %lf", &x, &y);
  
  printf("%.0f", average(x,y));
  return 0;
}
