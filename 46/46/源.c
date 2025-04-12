#include<stdio.h>
//形参与实参；


void e(int* x, int* y)//形参
{
	int z = *x;
	*x = *y;
	*y = z;
}
//实参
int main()
{
	int a = 0;
	int b = 0;
	scanf_s("%d%d", &a, &b);
	e(&a, &b);
	printf("%d%d", a, b);
	return 0;
}