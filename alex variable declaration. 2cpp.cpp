#include <stdio.h>

extern int a , b;
extern int c , d;
extern int e;
extern float f;

int main()
{
	int a , b;
	int c , d;
	int e;
	float f;
	
	a = 15;
	b = 20;
	c = a*b;
	d = 20/c;
	e =2*(a^2+b-c*d);
	f = 20.0/50.0;
	
	printf("value of e:%d\n",e);
	printf("value of f:%f\n",f);
	return 0;
}