#include<stdio.h>

int a = 1;

int main()
{
	int a = 0;
	int b = 0;
	//��ʼ��

	scanf_s("%d %d", &a, &b);
	//������������

	int c = a + b;
	//���

	printf("%d", c);
	//���

	return 0;
}
