#include"game.h"

//��ʼ������
void cushihua(char qipan[X][Y], int a, int b)
{
	int i = 0;
	int j = 0;
	for (i = 0;i < a;i++)
	{
		for (j = 0;j < b;j++)
		{
			qipan[i][j] = ' ';
		}
	}
}

//��ӡ����
void dayin(char qipan[X][Y], int a, int b)
{
	int i = 0;
	for (i = 0;i < a;i++)
	{
		//��ӡ����
		for (int j = 0;j < b;j++)
		{

			printf(" %c ", qipan[i][j]);

			if (j < b - 1)
			{
				printf("|");
			}

		}
		printf("\n");

		//��ӡ�ָ���Ϣ
		if (i < a - 1)
		{
			for (int j = 0;j < b;j++)
			{
				printf("---");
				if (j < b - 1)
				{
					printf("|");
				}
			}
			printf("\n");
		}
	}
}


//�������
void playwanjai(char qipan[X][Y], int a, int b)
{
	int x = 0;
	int y = 0;
	printf("�������:>\n");

	while(1)
	{
		printf("����������:>");

		scanf_s("%d %d", &x, &y);
		//���귶Χ�ж�
		if (x >= 1 && x <= a && y >= 1 && y <= b)
		{
			if (qipan[x - 1][y - 1] == ' ')
			{
				qipan[x - 1][y - 1] = '*';
				break;
			}
			else
			{
				printf("���걻ռ�ã�������ѡ��\n");
			}
		}
		else
		{
			printf("�����������������\n");
		}
	}
}


//�������
void playruji(char qipan[X][Y], int a, int b)
{
	printf("��������:>\n");
	int x = 0;
	int y = 0;
	while (1)
	{
		x = rand() % a;//0-2
		y = rand() % b;//0-2
		if (qipan[x][y] == ' ')
		{
			qipan[x][y] = '#';
			break;
		}
	}
}
