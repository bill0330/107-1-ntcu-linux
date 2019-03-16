#include <stdio.h>
int main(void)
{
  int i,c=0,d=0;
  char a[100],b=0;

  for (i=0;i<100;i++) {
    a[i]=getchar();
	if (a[i]=='.'||a[i]=='!'||a[i]=='?') {
		b=a[i];
		c=i;
		break;
	}
  }
  
  for (i=c;i>=0;i--) {
	if (a[i]==' ') {
	  d=i;
	  for (i=d+1;i<c;i++) {
		printf("%c",a[i]);
	  }
	printf(" ");
	c=d;
	i=d;
	}
	else if (i==0) {
	  for (i=0;i<c;i++) {
		printf("%c",a[i]);
	  }
	printf("%c",b);
	break;
	}
  }
	return 0;
}
		
