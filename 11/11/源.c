#include<stdio.h>
int main()
{
	int a = 20;
	int b = 30;
	           //b=10       a=0         c=10;
	int c = (b = a - 10, a = b - 10, c = a + b);
	printf("%d", c);
	return 0;
}