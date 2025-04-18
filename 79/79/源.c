//用递归的方式计算一个正整数的每位之和
#include<stdio.h>
int JISUAN(int x)
{
	/*if (x == 0)
	{
		return 0;
	}
	int i = 0;
	i = x % 10;
	int j = 0;
	j = x / 10;
	int b = 0;
	b = i + JISUAN(j);
	return b*/;
	if (x > 9)
		return JISUAN(x / 10) + x % 10;
	else
		return x;
}
int main()
{
	int a = 0;
	scanf_s("%d", &a);
	int b=JISUAN(a);
	printf("%d", b);
	return 0;
}