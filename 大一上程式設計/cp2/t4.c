#include <stdio.h>
int main(void)
{
  int height, length, width, volume, weight;

  height = 12;
  length = 11;
  width = 14;
  volume = height * length * width;
  weight = (volume + 99) / 100;

  printf("%d", weight);
  return 0;
}