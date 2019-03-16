#include <stdio.h>
int main(void)
{
  char x;
  scanf("%c", &x);
switch(x)
{
  case 'A': case 'a': printf("Apple");  break;
  case 'B': case 'b': printf("Banana"); break;
  case 'C': case 'c': printf("Cherry"); break;
  case 'D': case 'd': printf("Durian"); break;
  case 'E': case 'e': printf("Egg");    break;
  case 'F': case 'f': printf("Fish");   break;
  default : printf("Error");            break;
}
  return 0;
}