#include<stdio.h>

#define C 100
//define定义标识符常量

#define A(x,y) ((x)+(y))
//dedinr定义宏
//A为宏名，x,y为参数，((x)+(y))为宏体

int main()
{
	printf("%d\n", C);
	int d = C;
	printf("%d\n", d);



	int a = 10;
	int b = 20;
	int c = A(a, b);
	printf("%d\n", c);

	return 0;
}