#include<stdio.h>
int main()
{
	//不创建第三个临时变量，实现两个数的交换
	int a = 3;
	int b = 5;
	a = a ^ b;//3^5
	b = a ^ b;//3^5^5=3
	a = a ^ b;//3^5^3=5
	printf("%d\n%d\n", a, b);
	return 0;
}