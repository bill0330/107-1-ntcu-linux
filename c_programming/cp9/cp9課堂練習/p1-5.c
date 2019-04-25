#include <stdio.h>
int number(int n, int a[])
{
  int j, x=0;
  
  for (j=0;j<n;j++) {
    x+=a[j];
  }
  return x;
}

int main(void)
{
  int i, z;
  int b[99]={0};

  scanf("%d\n", &z);
  
  for (i=0;i<z;i++) {
    scanf("%d", &b[i]);
  }
  
  printf("%d",number(z,b));
  
  return 0;
}
