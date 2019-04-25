#include <stdio.h>
int main(void)
{
  float a=0,x; 
  printf("Enter a number (enter 0 to end): \n");
  scanf("%f", &x);

  while (x!=0) {
    if (x>a)
    a=x;
    else
    a=a;
    printf("Enter a number (enter 0 to end): \n");
    scanf("%f", &x);
  }

  printf("The largest number entered was %.2f", a);
  return 0;
}
     
  