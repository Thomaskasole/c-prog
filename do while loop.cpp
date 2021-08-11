#include <stdio.h>

int main ()
{
	int b = 15;
	
	do
	{
		printf("value of b :%d\n",b);
		b = b - 1;
	}
	while (b>10);
	return 0;
}