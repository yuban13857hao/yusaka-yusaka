#include<stdio.h>

int a = 1;

int main()
{
	int a = 0;
	int b = 0;
	//初始化

	scanf_s("%d %d", &a, &b);
	//输入两个整数

	int c = a + b;
	//求和

	printf("%d", c);
	//输出

	return 0;
}
