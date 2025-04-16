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

//�ж��Ƿ�ƽ��,����1������0
int meikonge(char qipan[X][Y], int a, int b)
{
	for (int i = 0;i < a;i++)
	{
		for (int j=0;j < b;j++)
		{
			if (qipan[i][j] == ' ')
			{
				return 0;
			}
		}
	}
	return 1;
}

//��Ϸ����
char jiesu(char qipan[X][Y], int a, int b)
{
	//�ж���
	int i = 0;
	for (i = 0;i < a;i++)
	{
		if (qipan[i][0] == qipan[i][1] && qipan[i][1] == qipan[i][2] && qipan[i][1] != ' ')
		{
			return qipan[i][1];
		}
	}

	//�ж���
	int j = 0;
	for (j = 0;j < b;j++)
	{
		if (qipan[0][j] == qipan[1][j] && qipan[1][j] == qipan[2][j] && qipan[1][j] != ' ')
		{
			return qipan[1][j];
		}
	}

	//�ж϶Խ���
	if (qipan[0][0] == qipan[1][1] && qipan[1][1] == qipan[2][2] && qipan[1][1] != ' ')
	{
		return qipan[1][1];
	}
	if (qipan[0][2] == qipan[1][1] && qipan[1][1] == qipan[2][0] && qipan[1][1] != ' ')
	{
		return qipan[1][1];
	}

	//û����Ӯ����ƽ��
	if (meikonge(qipan, a, b))
	{
		return 'Q';
	}
	return 'C';
}