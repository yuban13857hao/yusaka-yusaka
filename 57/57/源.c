#include<stdio.h>
//����������
int A(int x, int y);

int main()
{
	int a = 0;
	int b = 0;
	scanf_s("%d %d", &a, &b);
	int c = A(a, b);
	printf("%d", c);
	return 0;
}
//�����Ķ���
int A(int x, int y)
{
	return (x + y);
}