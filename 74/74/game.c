#include"game.h"

//初始化棋盘
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

//打印棋盘
void dayin(char qipan[X][Y], int a, int b)
{
	int i = 0;
	for (i = 0;i < a;i++)
	{
		//打印数据
		for (int j = 0;j < b;j++)
		{

			printf(" %c ", qipan[i][j]);

			if (j < b - 1)
			{
				printf("|");
			}

		}
		printf("\n");

		//打印分割信息
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


//玩家输入
void playwanjai(char qipan[X][Y], int a, int b)
{
	int x = 0;
	int y = 0;
	printf("玩家下棋:>\n");

	while(1)
	{
		printf("请输入坐标:>");

		scanf_s("%d %d", &x, &y);
		//坐标范围判断
		if (x >= 1 && x <= a && y >= 1 && y <= b)
		{
			if (qipan[x - 1][y - 1] == ' ')
			{
				qipan[x - 1][y - 1] = '*';
				break;
			}
			else
			{
				printf("坐标被占用，请重新选择\n");
			}
		}
		else
		{
			printf("输入错误，请重新输入\n");
		}
	}
}


//入机输入
void playruji(char qipan[X][Y], int a, int b)
{
	printf("电脑下棋:>\n");
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
