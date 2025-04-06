#include<stdio.h>
int main()
{
	int a = 0;
	int b = 1;
	int c = 0;
	for (a = 1;a <= 10;a++)
	{
		b = b * a;
		c = c + b;
	}
	printf("%d", c);
	return 0;
}