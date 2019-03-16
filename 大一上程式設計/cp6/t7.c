#include <stdio.h>
int main(void)
{
  int x,y,i,j;
  scanf("%d", &x);
  scanf("%d", &y);

  for (j=1;j<=y-1;j++) {
  printf("   ");
  }

  for (i=1;i<=x;i++) {
    if ((i+y-2)%7 == 0)
    printf("\n");
  printf("%2d ", i);
  }

  return 0;
}