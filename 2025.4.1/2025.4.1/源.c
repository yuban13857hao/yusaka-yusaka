#include<stdio.h>

int main()
{
	int input = 0;
	printf("���\n");
	printf("Ҫ��ys��1/0/2)��");
	scanf_s("%d", &input);
	if (input == 1)
	{
		printf("��ys���\n");
	}
	if (input == 2)
	{
		printf("�Ⱳ������\n");
	}
	else
	{
		printf("����ys���µ�\n");
	}
	return 0;
}