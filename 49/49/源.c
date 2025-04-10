//输入一个数，判断是否为素数(默认正整数1）
#include<stdio.h>
#include<math.h>
int main()
{
	//输入
	int a = 0;
	scanf_s("%d", &a);
	//判断
	if (a < 2)//边界值直接判断
	{
		printf("%d 不是素数\n", a);
		return 0;
	}
	int b = 0;//判断a是否为素数用
	int c = 1;//if判断用
	for (b = 2;b <= sqrt(a);b++)
	{
		if (a % b == 0)//判断a是否为素数
		{
			c = 0;
			break;
		}
		
	}
	if (c)
	{
		printf("%d是素数\n", a);
	}
	else
	{
		printf("%d不是素数\n", a);
	}
	return 0;
}