#include <stdio.h>
int number(int a)
{
  int i, j;
  
  for (i=1;i<=a-1;i++) {
    for (j=1;j<=a;j++)
    printf("*");
  printf("\n");
  }
  
  for (i=1;i<=1;i++) {
    for (j=1;j<=a;j++)
    printf("*");
  } 
  return 0;
}

int main(void)
{
  int z;

  scanf("%d", &z);
  
  number(z);
  
  return 0;
}
