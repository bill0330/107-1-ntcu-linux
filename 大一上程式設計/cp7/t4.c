#include <stdio.h>
int main(void)
{
  char x;
  int y=0,z=0;
  printf("Enter a sentence: ");
  x=getchar();

  while (x!='\n') {
    if (x=='A'||x=='E'||x=='I'||x=='O'||x=='U'||
        x=='a'||x=='e'||x=='i'||x=='o'||x=='u')
    y=1;
    else y=0;
  z+=y;
  x=getchar();
  }
  printf("Your sentence contains %d vowels.", z);
  return 0;
} 