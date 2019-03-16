#include <stdio.h>
int main(void)
{
  char x;
  int y=0,z=0; 
  printf("Enter a word: ");
  x=getchar();

  while (x!='\n') {
    if (x=='A'||x=='E'||x=='I'||x=='L'||x=='N'||x=='O'||x=='R'||x=='S'||x=='T'||x=='U'||
        x=='a'||x=='e'||x=='i'||x=='l'||x=='n'||x=='o'||x=='r'||x=='s'||x=='t'||x=='u')
    y=1;
    else if (x=='D'||x=='G'||
             x=='d'||x=='g')
    y=2;
    else if (x=='B'||x=='C'||x=='M'||x=='P'||
             x=='b'||x=='c'||x=='m'||x=='p')
    y=3;
    else if (x=='F'||x=='H'||x=='V'||x=='W'||x=='Y'||
             x=='f'||x=='h'||x=='v'||x=='w'||x=='y')
    y=4;    
    else if (x=='K'||x=='k')
    y=5;
    else if (x=='J'||x=='X'||
             x=='j'||x=='x')
    y=8;
    else if (x=='Q'||x=='Z'||
             x=='q'||x=='z')
    y=10;
   
    z+=y;
  x=getchar();
  }

  printf("Scrabble value: %d", z);
  return 0;
}