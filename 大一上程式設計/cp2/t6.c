#include <stdio.h>

#define SCALE_FACTOR (9.00f / 5.00f)
#define FREEZING_PT 32.00f

int main(void)
{
  float celsius, fahrenheit;

  scanf("%f", &celsius);

  fahrenheit = (celsius * SCALE_FACTOR) + FREEZING_PT;

  printf("%.2f", fahrenheit);

  return 0;
}