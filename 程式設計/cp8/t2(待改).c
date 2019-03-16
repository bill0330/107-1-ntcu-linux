#include <stdio.h>
int main(void)
{
  int i,a[25],x=0,y=0;
  
  printf("Enter row 1: ");
  for (i=0;i<5;i++)
    scanf("%d", &a[i]);
  
  printf("Enter row 2: ");
  for (i=5;i<10;i++)
    scanf("%d", &a[i]);

  printf("Enter row 3: ");
  for (i=10;i<15;i++)
    scanf("%d", &a[i]);
    
  printf("Enter row 4: ");
  for (i=15;i<20;i++)
    scanf("%d", &a[i]);

  printf("Enter row 5: ");
  for (i=20;i<25;i++)
    scanf("%d", &a[i]);

    
  printf("Row totals:");
  for (i=0;i=0;i<5) {
    x+=a[i];
	i++;
  }  
  printf(" %d\n", x);
  
  printf("Column totals:");
  for (i=0;i=0;i<5) {
    y=a[i]+b[i]+c[i]+d[i]+e[i];
	i++;
	printf(" %d", y);
  }

  return 0;
}
