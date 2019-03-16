#include <stdio.h>
int main(void)
{
  int a[5], i;
  
  for (i=0;i<5;i++) {
    scanf("%d", &a[i]);
    printf("%d\n", a[i]);
  }

  return 0;
}
