#include<stdio.h>
//����쳲�������

//int F(f)
//{
//	if (f <= 2)
//		return 1;
//	else
//		return F(f - 1) + F(f - 2);
//}
//�ݹ��ڴ������д����ظ����㣬Ч�ʵͣ�

int F(f)
{
	int i = 0;
	int a = 1;
	int b = 1;
	int c = 0;
	if (f <= 2)
	{
		c = 1;
	}
	else
	{
		for (i = 1;i < f - 1;i++)
		{
			c = a + b;
			a = b;
			b = c;
		}
	}
	return c;
}
//ѭ���ڴ������м��������٣�Ч�ʸ��ߣ�

int main()
{
	int f = 0;

	a:

	scanf_s("%d", &f);

	int a = F(f);

	if (f <= 0)
	{
		printf("�������������������\n");
		while (getchar() != '\n'); // �������в����ַ�
		goto a;
	}

	else
	{
		printf("%d", a);
	}

	return 0;
}