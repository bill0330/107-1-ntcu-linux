#include<stdio.h>
int main(void)
{
  int i,x=0,n=0;
  char a[100],ch;
  
  while ((ch=getchar()) != '\n') {
    a[n]=ch;
    n++;
    x=n;
  }
  
  
  for (i=x-1;i>=0;i--) {
  	printf("%c",a[i]);
  }
  
  return 0;
}
