#include<stdio.h>
int main(void)
{
  int x;
  
  scanf("%d", &x);
  while (x != -1) {
  	printf("%c\n", x);
  	scanf("%d", &x);
  }
  
  return 0;
}
