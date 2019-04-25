#include <stdio.h>
int main(void)
{
  int amount, bills;

  scanf("%d", &amount);
  bills = amount/20;
  printf("%d", bills);

  amount = amount-(bills*20);
  bills = amount/10;
  printf(" %d", bills);

  amount = amount-(bills*10);
  bills = amount/5;
  printf(" %d", bills);

  amount = amount-(bills*5);
  bills = amount/1;
  printf(" %d", bills);

  return 0;
}


