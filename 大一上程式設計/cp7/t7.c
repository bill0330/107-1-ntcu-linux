#include <stdio.h>
int main(void)
{
  char x;
  float a=0,b=1;
  printf("Enter a sentence: ");

  x=getchar();
  while (x!='\n') {
    if (x==' ')
    b++;
    else if (x!=' ')
    a++;
  x=getchar();
  }

  printf("Characters: %.0f\n", a);
  printf("Words: %.0f\n", b);
  printf("Average word length: %.1f", a/b);
  return 0;
}
  