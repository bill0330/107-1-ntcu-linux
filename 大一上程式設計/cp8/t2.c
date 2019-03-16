#include <stdio.h>
int main(void)
{
  int i,a[5],b[5],c[5],d[5],e[5],x=0,y=0;
  
  printf("Enter row 1:\n");
  for (i=0;i<5;i++)
    scanf(" %d", &a[i]);
  
  printf("Enter row 2:\n");
  for (i=0;i<5;i++)
    scanf(" %d", &b[i]);

  printf("Enter row 3:\n");
  for (i=0;i<5;i++)
    scanf(" %d", &c[i]);
    
  printf("Enter row 4:\n");
  for (i=0;i<5;i++)
    scanf(" %d", &d[i]);

  printf("Enter row 5:\n");
  for (i=0;i<5;i++)
    scanf(" %d", &e[i]);
  
  printf("Row totals:");
  for (i=0;i<5;i++)
    x+=a[i];
  printf(" %d", x);
  
  x=0;
  for (i=0;i<5;i++)
    x+=b[i];
  printf(" %d", x);
  
  x=0;
  for (i=0;i<5;i++)
    x+=c[i];
  printf(" %d", x);
  
  x=0;
  for (i=0;i<5;i++)
    x+=d[i];
  printf(" %d", x);
  
  x=0;
  for (i=0;i<5;i++)
    x+=e[i];
  printf(" %d\n", x);

  printf("Column totals:");
  for (i=0;i<5;i++) {
    y=a[i]+b[i]+c[i]+d[i]+e[i];
	printf(" %d", y);
  }

  return 0;
}
