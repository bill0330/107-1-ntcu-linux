#include <stdio.h>
int main(void)
{
  int number,mm,dd,yyyy;
  float price;

  scanf("%d",&number);
  scanf("%f",&price);
  scanf("%d/%d/%d",&mm,&dd,&yyyy);

  printf("Item		Unit		Purchase\n");
  printf("		Price		Date\n");
  printf("%d		$%6.2f		%.2d/%.2d/%d",number,price,mm,dd,yyyy);
  return 0;
}		