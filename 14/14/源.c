#include<stdio.h>

#define C 100
//define�����ʶ������

#define A(x,y) ((x)+(y))
//dedinr�����
//AΪ������x,yΪ������((x)+(y))Ϊ����

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