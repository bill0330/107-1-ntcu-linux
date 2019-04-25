#include<stdio.h>
int main(void)
{
  int i,n=0;
  char a[100],ch;
  
  while ((ch=getchar()) != '\n') {
    a[n]=ch;
    n++;
  }
  
  for (i=0;i<n;i++) {
  	if (a[i]>='a' && a[i]<='z')
    a[i]=a[i]-32;
  }
  
  for(i=0;i<n;i++) { 
    printf("%c",a[i]);
  }
  
  printf("\n");
  
  for (i=0;i<n;i++) {
  	if (a[i]>='A' && a[i]<='Z')
    a[i]=a[i]+32;
  }
  
  for(i=0;i<n;i++) { 
    printf("%c",a[i]);
  }
  return 0;
}
