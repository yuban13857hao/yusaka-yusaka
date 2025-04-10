//，输入年份判断闰年
#include<stdio.h>
//能被4整除，但不能被100整除，
// 能被400整除；
int A(int x)
{
	if ((x % 4 == 0 && x % 100 != 0) || x % 400 == 0)
	{
		return 1;
	}
	return 0;
		
}
int main()
{
	int a = 0;
	scanf_s("%d", &a);
	if (A(a))
	{
		printf("%d是闰年", a);
	}
	else
	{
		printf("%d不是闰年", a);
	}
	return 0;
}