#include<stdio.h>
//计算斐波那契数

//int F(f)
//{
//	if (f <= 2)
//		return 1;
//	else
//		return F(f - 1) + F(f - 2);
//}
//递归在此例子中大量重复计算，效率低；

int F(f)
{
	int i = 0;
	int a = 1;
	int b = 1;
	int c = 0;
	if (f <= 2)
	{
		c = 1;
	}
	else
	{
		for (i = 1;i < f - 1;i++)
		{
			c = a + b;
			a = b;
			b = c;
		}
	}
	return c;
}
//循环在此例子中计算量更少，效率更高；

int main()
{
	int f = 0;

	a:

	scanf_s("%d", &f);

	int a = F(f);

	if (f <= 0)
	{
		printf("输入错误，请输入正整数\n");
		while (getchar() != '\n'); // 清理所有残留字符
		goto a;
	}

	else
	{
		printf("%d", a);
	}

	return 0;
}