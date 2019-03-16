#include <stdio.h>
double average(double a, double b, double c, double d)
{
  return (a+b+c+d) / 4;
}

int main(void)
{
  double x, y, z, w;

  scanf("%lf %lf %lf %lf", &x, &y, &z, &w);
  
  printf("%.2f", average(x,y,z,w));
  return 0;
}
