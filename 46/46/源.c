#include<stdio.h>
//�β���ʵ�Σ�


void e(int* x, int* y)//�β�
{
	int z = *x;
	*x = *y;
	*y = z;
}
//ʵ��
int main()
{
	int a = 0;
	int b = 0;
	scanf_s("%d%d", &a, &b);
	e(&a, &b);
	printf("%d%d", a, b);
	return 0;
}