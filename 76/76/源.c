#include<stdio.h>
//用递归的方法打印一个整数的每一位
void A(int x)
{
	int i = x % 10;
	int j = x / 10;
	if (x == 0)
	{
		return;
	}
	
	A(j);
	
	printf("%d", i);
}
int main()
{
	int a = 0;
	scanf_s("%d", &a);
	A(a);
	return 0;
}