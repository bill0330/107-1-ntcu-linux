#include <stdio.h>
#include <math.h>
int main(void)
{
	double x, y=1, z, a, b;
	
	printf("Enter a positive number: \n");
	scanf("%lf", &x);
	
	z=x/y;
	a=(y+z)/2;
	b=a-y;
	y=a;
	
	while (fabs(b) > 0.00001*y) {
      z=x/y;
	  a=(y+z)/2;
	  b=a-y;
	  y=a;
	}
	
	printf("Square root: %.5f", a);
	return 0;
}
	
