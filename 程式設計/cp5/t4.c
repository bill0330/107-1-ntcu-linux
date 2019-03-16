#include <stdio.h>
int main(void)
{
  int a,b;
  printf("Enter a 24-hour time: ");
  scanf("%d:%d", &a,&b);

  if (a == 0 && b == 0)
  printf("Equivalent 12-hour time: 12:00 AM");
  else if (a<12 && a>=0)
  printf("Equivalent 12-hour time: %d:%.2d AM", a,b);
  else if (a == 12 && b!=0)
  printf("Equivalent 12-hour time: 12:%.2d PM", b);
  else if (a>12 && a<24)
  printf("Equivalent 12-hour time: %d:%.2d PM", a-12,b);
  else
  printf("不是正確的時間格式");
  return 0;
}