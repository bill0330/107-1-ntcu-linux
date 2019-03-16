#include<stdio.h>
int main(void)
{
  int i,n=0;
  char a[99],ch;

  printf("Enter message: ");


  while ((ch=getchar()) != '\n') {
    a[n]=ch;
    n++;
  }

  for (i=0;i<n;i++) {
    if (a[i]=='a')
    a[i]='4';
    else if (a[i]=='b')
    a[i]='8';
    else if (a[i]=='e')
    a[i]='3';
    else if (a[i]=='i')
    a[i]='1';
    else if (a[i]=='o')
    a[i]='0';
    else if (a[i]=='s')
    a[i]='5';
    else if (a[i]>='a' && a[i]<='z')
    a[i]=a[i]-32;
    else
    a[i]=a[i];
  }

  printf("In B1FF-speak: ");
  
  for(i=0;i<n;i++) { 
    printf("%c",a[i]);
  }
   
  printf("!!!!!!!!!!");
  return 0;
}

