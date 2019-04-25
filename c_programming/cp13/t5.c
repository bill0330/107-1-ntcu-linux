#include<stdio.h>
int main(void)
{
	char *a="Mercury", *b="Venus",  *c="Earth",   *d="Mars",  *e="Jupiter",
	     *f="Saturn",  *g="Uranus", *h="Neptune", *i="Pluto", *j="Japan";  
	char *n, name[99];
	
	n=name;
	
	gets(n);
	
    if (*n==*j)
	printf("%s is not a planet.", n);
	
    else if (*n==*a||*n==*b||*n==*c||*n==*d||
	         *n==*e||*n==*f||*n==*g||*n==*h||*n==*i)
	printf("%s is a planet.", n);
	
    else 
	printf("%s is not a planet.", n);
	
	return 0;
}
