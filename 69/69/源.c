#include<stdio.h>
//1-100的所有整数中出现多少个数字九
int main()
{
	int a = 0;
	for (int i = 1;i <= 100;i++)
	{
		
		if (i % 10 == 9)
		{
			a += 1;
		}
		if (i / 10 == 9)
		{
			a += 1;
		}
	}
	printf("%d", a);
	return 0;
}