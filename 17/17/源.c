#include<stdio.h>
int main()
{
	int k = 0;
	int l = 0;
	scanf_s("%d %d", &k, &l);
	int c = k / l;
	int d = k % l;
	printf("%d %d\n", c, d);
	return 0;
}