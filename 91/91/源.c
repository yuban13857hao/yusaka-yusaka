#include<stdio.h>
int main()
{
	int a = 0;
	int b = 2;
	int c = 3;
	int d = 4;
	int i = a++ && ++b && d++;
	printf("%d%d%d%d", a, b, c, d);
	return 0;
}