#include<stdio.h>
int main(void)
{
  int d=0,e=0;
  char a=' ';

  printf("Enter first word: ");
  
  while (1) {
  a=getchar();
	if (a=='\n') {
		break;
	}
  d=d+a;
  }
  
  printf("Enter second word: ");
  
  while (1) {
  a=getchar();
	if (a=='\n') {
		break;
	}
  e=e+a;
}

  if (d==e)
  printf("The words are anagrams.");
  else
  printf("The words are not anagrams."); 
  return 0;
}

