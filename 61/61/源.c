//打印1234，输出1 2 3 4 
//函数的递归
#include<stdio.h>
void A(int x)
{
	if (x > 9)
	{
		A(x / 10);
	}
	printf("%d ", x % 10);
}
int main()
{
	int a = 0;
	scanf_s("%d", &a);
	A(a);
	return 0;
}