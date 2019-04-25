#include <stdio.h>
int main(void)
{
  int a,b=1,i,j;
  float d=1.0000;
  scanf("%d", &a);

  for (i=1;i<=a;i++) {
    for (j=1;j<=i;j++) {
    b*=j;
    }
  d+=1.0000f/b;
  b=1;
  }

  printf("%.4f", d);
  return 0;
}
  