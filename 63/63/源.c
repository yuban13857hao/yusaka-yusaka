#include<stdio.h>
//递归的方式
int A(int n)
{
	if (n <= 1)
		return 1;
	else
		return n * A(n - 1);
}

//迭代的方式
//int A(int n)
//{
//	int i = 0;
//	int b = 1;
//	for (i = 1;i <= n;i++)
//	{
//		b *= i;
//	}
// rerurn b;
//}

int main()
{
	int n = 0;
	scanf_s("%d", &n);
	int c = A(n);
	printf("%d!=%d\n", n, c);
	return 0;
}