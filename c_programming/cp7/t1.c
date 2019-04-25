#include <stdio.h>
int main(void)
{
  char x;
  printf("Enter phone number: ");

  do {
  x=getchar();
    if (x=='A'||x=='B'||x=='C')
    printf("2");
    else if (x=='D'||x=='E'||x=='F')
    printf("3");
    else if (x=='G'||x=='H'||x=='I')
    printf("4");
    else if (x=='J'||x=='K'||x=='L')
    printf("5");
    else if (x=='M'||x=='N'||x=='O')
    printf("6");
    else if (x=='P'||x=='R'||x=='S')
    printf("7");
    else if (x=='T'||x=='U'||x=='V')
    printf("8");
    else if (x=='W'||x=='X'||x=='Y')
    printf("9");
    else printf("%c", x);
  }while (x!='\n');
  return 0;
}