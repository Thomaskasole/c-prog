#include <stdio.h>

int main()
{
	const int LENGTH =20;
	const int WIDTH = 5;
	int area;
	int perimeter;
	area = LENGTH*WIDTH;
	perimeter = 2*(LENGTH+WIDTH);
	printf("value of area:%d\n",area);
	printf("value of perimeter:%d\n",perimeter);
	return 0;
}