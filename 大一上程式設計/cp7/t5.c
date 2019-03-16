#include <stdio.h>
int main(void)
{
  char a, b;
  printf("Enter a first and last name: \n");
  
  a=getchar();
  
  if (a==' ')
  a=getchar();
  
  while (b != ' ') {
  	b=getchar();
  } 
  
  while (b != '\n') {
  	b=getchar();
  	
  	if (b=='\n')
  	break;
  	
  	else if (b==' ') 
  	break;
  	
  	printf("%c", b);
  } 
  
  printf(", %c.", a);
  return 0;
}
