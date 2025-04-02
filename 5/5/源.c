#include<stdio.h>
#include<string.h>
int Max(int x, int y)
{
	if (x > y)
		return x;
	else
		return y;
};
int main()
{
	int a = 0;
	int b = 0;
	scanf_s("%d %d", &a, &b);
	int c = Max(a, b);
	printf("%d\n", c);
	return 0;
}