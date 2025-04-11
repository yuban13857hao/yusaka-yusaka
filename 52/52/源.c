#include<stdio.h>
#include<stdbool.h>
#include<math.h>
//bool类型，只返回真假
bool a(int n)
{
	int j = 0;
	for (j = 2;j <= sqrt (n);j++)
	{
		if (n % j == 0)
		{
			return false;
		}
	}
	return true;
}
int main()
{
	int i = 0;
	for (i = 100;i <= 200;i++)
	{
		if (a(i))
		{
			printf("%d\n", i);
		}
	}
	return 0;
}