#include<stdio.h>
//两个整数二进制中不同位的个数
int ADD(int a, int b)
{
    int i = 0;
	for (int j = 0;j < 32;j++)
	{
		
		if ((a & 1) != (b & 1))
		{
			i++;
		}
		a >>= 1;
		b >>= 1;
	}
	return i;
}
int main()
{
	int a = 0;
	int b = 0;
	scanf_s("%d%d", &a, &b);
	int c = ADD(a, b);
	printf("%d", c);
	return 0;
}