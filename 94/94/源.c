//假设有n个台阶，a一次可以走一或者二个台阶
//那他一共有多少种走法（1<=n<=30）
int ADD(int a)
{
	if (a == 1)
	{
		return 1;
	}
	if (a == 2)
	{
		return 2;
	}
	return ADD(a - 1) + ADD(a - 2);
	
}
#include<stdio.h>
int main()
{
	int a = 0;
	scanf_s("%d", &a);
	int b = ADD(a);
	printf("共有%d种走法", b);
	return 0;
}