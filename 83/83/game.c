#include"game.h"
void cushihua(char arr[XS][YS], int x, int y, int a)
{
	int i = 0;
	int j = 0;
	for (i = 0;i < x;i++)
	{
		for (j = 0;j < y;j++)
		{
			arr[i][j] = a;
		}
	}
}

void dayin(char arr[XS][YS], int x, int y)
{
	int i = 0;
	int j = 0;
	printf("--------------------扫雷游戏----------------------\n");
	for (j = 0;j <= y;j++)
	{
		printf("%d ", j);
	}
	printf("\n");
	for (i = 1;i <= x;i++)
	{
		printf("%d ", i);
		for (j = 1;j <= y;j++)
		{
			printf("%c ", arr[i][j]);
		}
		printf("\n");
	}
	printf("--------------------扫雷游戏----------------------\n");

}

void lei(char arr[XS][YS], int x, int y)
{
	int l = jiandan;//雷的数量
	while (l)
	{
		int a = rand() % x + 1;
		int b = rand() % y + 1;
		if (arr[a][b] == '0')
		{
			arr[a][b] = '1';
			l--;
		}
	}
}

int tongji(char zeng[XS][YS], int x, int y)
{
	return (zeng[x - 1][y] +
		zeng[x - 1][y - 1] +
		zeng[x + 1][y - 1] +
		zeng[x + 1][y] +
		zeng[x + 1][y + 1] +
		zeng[x][y + 1] +
		zeng[x][y] +
		zeng[x - 1][y + 1] - 8 * '0');
}

void paica(char zeng[XS][YS], char jia[XS][YS], int x, int y)
{
	int a = 0;
	int b = 0;
	int d = 0;//找到非雷的个数
	while (d<x*y-jiandan)
	{
		printf("请输入要排查的坐标:>");
		scanf_s("%d%d", &a, &b);
		if (a >= 1 && a <= x && b >= 1 && b <= y)
		{
			if (jia[a][b] != '*')
			{
				printf("请勿重复输入\n");
			}
			else
			{ 
				//如果是雷
				if (zeng[a][b] == '1')
				{
					printf("你被炸死了\n");
					dayin(zeng, X, Y);
					break;
				}
				//如果不是雷
				else
				{
					d++;
					//统计周围雷的数量
					int c = tongji(zeng, a, b);
					jia[a][b] = c + '0';
					dayin(jia, X, Y);
				}
			}
			
		}
		else
		{
			
			printf("输入错误，重新输入\n");
		}
	}
	if (d == x * y - jiandan)
	{
		printf("游戏胜利\n");
		dayin(zeng, X, Y);
	}
}
