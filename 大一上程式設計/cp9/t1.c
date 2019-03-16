#include <stdio.h>
double average(double a, double b, double c)
{
  return (a+b+c) / 3;
}

int main(void)
{
  double x, y, z;

  scanf("%lf %lf %lf", &x, &y, &z);
  
  printf("%.2f", average(x,y,z));
  return 0;
}
