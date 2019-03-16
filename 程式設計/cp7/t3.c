#include <stdio.h>
int main(void)
{
  char x;
  int y,z; 
  printf("Enter a 12-hour time (hours:minutes AM/PM): ");
  scanf("%d:%d %c", &y,&z,&x);

  if (x=='A'||x=='a')
  printf("Equivalent 24-hour time: %.2d:%.2d", y,z);
  else if ((x=='P'||x=='p')&&y==12)
  printf("Equivalent 24-hour time: %.2d:%.2d", y,z);
  else if ((x=='P'||x=='p')&&y!=12)
  printf("Equivalent 24-hour time: %.2d:%.2d", y+12,z);

  return 0;
}