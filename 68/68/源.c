#include<stdio.h>
int main()
{
	int a = 0;
	int b = 0;
	scanf_s("%d%d", &a, &b);
	

	if (a == 0 || b == 0) 
	{
		printf("�������벻��Ϊ0\n");
		return 1;
	}

	//�������
	//int c = a > b ? b : a;
	/*for (int i = c; i > 0 ;i--)
	{
		

		if (a % i == 0 && b % i == 0)
		{
			printf("���Լ��Ϊ%d", i);
			break;
		}

	}*/

	//շת�����
	int c = a % b;
	while (c)
	{
		a = b;
		b = c;
	}
	printf("%d\n", b);

	return 0;
}