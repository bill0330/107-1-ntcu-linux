#include <stdio.h>
int main(void)
{
  int a[10], i;
  
  for (i=0;i<10;i++)
    scanf("%d", &a[i]);
    
    printf("%d", a[9]);

  for (i=8;i>=0;i--)
    printf(" %d", a[i]);

  return 0;
}
