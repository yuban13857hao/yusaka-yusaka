#include<stdio.h>

int main()
{
	int a = 0;
	int b = 0;
	int c = 0;
	scanf_s("%d%d%d", &a, &b, &c);


	//冒泡排序
	/*int p[] = { a,b,c };
	for (int i = 0;i < 3-1 ;i++)
	{
		for (int j = 0;j < 3-1-i ;j++)
		{
			if (p[j] < p[j + 1])
			{
				int t = p[j];
				p[j] = p[j + 1];
				p[j + 1] = t;
			}
		}
	}
	for (int i = 0;i < 3;i++)
	{
		printf("%d ", p[i]);
	}*/

	//或者用多个if语句
	if (a < b)
	{
		int t = 0;
		t = a;
		a = b;
		b = t;
	}
	if (a < c)
	{
		int t = 0;
		t = a;
		a = c;
		c = t;
	}
	if (b < c)
	{
		int t = 0;
		t = b;
		b = c;
		c = t;
	}
	printf("%d %d %d", a, b, c);

	return 0;
}