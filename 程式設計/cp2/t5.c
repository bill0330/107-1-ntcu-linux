#include <stdio.h>
int main(void)
{
  int height, length, width, inches_per_pound;

  scanf("%d", &height);
  scanf("%d", &length);
  scanf("%d", &width);
  scanf("%d", &inches_per_pound);
  printf("%d", (height * length * width + inches_per_pound - 1) / inches_per_pound);

  return 0;
}