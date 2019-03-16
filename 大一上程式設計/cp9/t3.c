#include <stdio.h>
int number(int n,int a[])
{
  int i,j,y=0;
  
  for (i=0;i<n;i++) {
  	for (j=1;j<n;j++) {
  		if (a[j-1]>a[j]) {
  			y=a[j-1];
  			a[j-1]=a[j];
  			a[j]=y;
		  }
	  }
  }
  
  if (n<=4) {
  	printf("%d %d", a[n-1],a[0]);
  }
  else 
    printf("%d %d %d %d", a[n-1],a[n-2],a[1],a[0]);
  return 0;
}

int main(void)
{
  int i, z;
  int b[99]={0};

  scanf("%d\n", &z);
  
  for (i=0;i<z;i++) {
    scanf(" %d", &b[i]);
  }
  
  number(z,b);
  return 0;
}
