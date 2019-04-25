#include <stdio.h>

#define a 10000
#define b 100
int main(void)
{
  int mm, dd, yyyy;
 
  printf("Enter a date (mm/dd/yyyy):");
  scanf("%d/%d/%d", &mm,&dd,&yyyy);

  printf("You entered the date %d", yyyy*a+mm*b+dd);
  return 0;
}