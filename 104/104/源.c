//返回整数二进制中1的个数
int E(int a)
{
	int b = 0;
	if (a == 0)
	{
		b = 0;
	}
	else 
	{
		while (a)
		{
			b = b + (a & 1);
			a = a >> 1;
		}
	}
	
	return b;
}
#include<stdio.h>
int main()
{
	int a = 0;
	scanf_s("%d", &a);
	int i=E(a);
	printf("二进制中有%d个1", i);
	return 0;
}