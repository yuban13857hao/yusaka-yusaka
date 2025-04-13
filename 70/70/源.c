#include<stdio.h>
int main()
{
	double a = 0;
	int b = 1;
	for (int i = 1;i <= 100;i++)
	{
		a = a + b * (1.0 / i);
		b = -b;
	}
	printf("%lf\n", a);
	return 0;
}