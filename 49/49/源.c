//����һ�������ж��Ƿ�Ϊ����(Ĭ��������1��
#include<stdio.h>
#include<math.h>
int main()
{
	//����
	int a = 0;
	scanf_s("%d", &a);
	//�ж�
	if (a < 2)//�߽�ֱֵ���ж�
	{
		printf("%d ��������\n", a);
		return 0;
	}
	int b = 0;//�ж�a�Ƿ�Ϊ������
	int c = 1;//if�ж���
	for (b = 2;b <= sqrt(a);b++)
	{
		if (a % b == 0)//�ж�a�Ƿ�Ϊ����
		{
			c = 0;
			break;
		}
		
	}
	if (c)
	{
		printf("%d������\n", a);
	}
	else
	{
		printf("%d��������\n", a);
	}
	return 0;
}