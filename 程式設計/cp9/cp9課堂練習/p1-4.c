#include <stdio.h>
int number(int x)
{
  int w;
  for (w=x;w>0;w--) {
    printf("%d\n", w);
  }
  return 0;
}

int main(void)
{
  int z;

  scanf("%d", &z);
  printf("%d", number(z));
  return 0;
}
