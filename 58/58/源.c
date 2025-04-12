#include<stdio.h>
#include"1.h"

//此时1.h与2.c称为一个模块（加法模块）

int main()
{
	int a = 0;
	int b = 0;
	scanf_s("%d %d", &a, &b);
	int c = A(a, b);
	printf("%d", c);
	return 0;
}
