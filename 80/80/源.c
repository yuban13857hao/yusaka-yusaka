//用递归的方式实现A的B次方
#include<stdio.h>
int CHIFAN(int x,int y)
{
	if (y == 0)
	{
		return 1;
	}
	else
		return CHIFAN(x,y-1) * x;
}
int main()
{
	int a = 0;
	int b = 0;
	scanf_s("%d%d", &a,&b);
	CHIFAN(a,b);
	int c = CHIFAN(a, b);
	printf("%d", c);
	return 0;
}