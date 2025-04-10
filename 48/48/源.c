#include<stdio.h>
//寻找100~200之间的素数
int main()
{
	int i = 0;
	for (i = 100;i <= 200;i++)//打印100到200的所有数字
	{
		//判断i是否为素数，是就打印；
		int c = 1;//判断真假用

		int b = 0;
		for (b = 2;b <= i - 1;b++)
		{
			if (i % b == 0)//判断是否为素数
			{
				c = 0;//如果不是素数，就修改c，使得代码打印不出结果
				break;
			}
		}
		if (c == 1)//当c为真时，打印，此时i为素数
		{
			printf("%d\n", i);
		}
	}
	return 0;
}