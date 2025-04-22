#include"game.h"
void cushihua(char arr[XS][YS], int x, int y, int a)
{
	for (int i = 0;i < x;i++)
	{
		for (int j = 0;j < y;j++)
		{
			arr[i][j] = a;
		}
	}
}
void dayin(char arr[XS][YS], int x, int y)
{
	printf("------推箱子------\n");
	for (int i = 1;i < 1+x;i++)
	{
		for (int j = 1;j < 1+y;j++)
		{
			printf("%c ", arr[i][j]);
		}
		printf("\n");
	}
	printf("------推箱子------\n");

}
 
void yundong(char arr[XS][YS], int x, int y, int w, int x1, int y1, int x2, int y2)
{
	dayin(arr, X, Y);
	while (arr[2][7] != '*')
	{
		
		printf("请输入:>");
		scanf_s("%d", &w);
		//小键盘8为上，2为下，4为左，6为右
		switch (w)
		{
		case 8:
			if (arr[x1 - 1][y1] == '*')
			{
				arr[x1 - 2][y1] = '*';
				arr[x1][y1] = '0';
				x1 = x1 - 1;
				arr[x1][y1] = '1';
				dayin(arr, X, Y);

			}
			else
			{
				arr[x1][y1] = '0';
				x1 = x1 - 1;
				arr[x1][y1] = '1';

				dayin(arr, X, Y);
			}

			break;
		case 2:
			if (arr[x1 + 1][y1] == '*')
			{
				arr[x1 + 2][y1] = '*';
				arr[x1][y1] = '0';
				x1 = x1 + 1;
				arr[x1][y1] = '1';

				dayin(arr, X, Y);
			}
			else
			{
				arr[x1][y1] = '0';
				x1 = x1 + 1;
				arr[x1][y1] = '1';

				dayin(arr, X, Y);
			}

			break;
		case 4:
			if (arr[x1][y1 - 1] == '*')
			{
				arr[x1][y1 - 2] = '*';
				arr[x1][y1] = '0';
				y1 = y1 - 1;
				arr[x1][y1] = '1';

				dayin(arr, X, Y);
			}
			else
			{
				arr[x1][y1] = '0';
				y1 = y1 - 1;
				arr[x1][y1] = '1';

				dayin(arr, X, Y);
			}
			

			break;
		case 6:
			if (arr[x1][y1 + 1] == '*')
			{
				arr[x1][y1 + 2] = '*';
				arr[x1][y1] = '0';
				y1 = y1 + 1;
				arr[x1][y1] = '1';

				dayin(arr, X, Y);
			}
			else
			{
				arr[x1][y1] = '0';
				y1 = y1 + 1;
				arr[x1][y1] = '1';

				dayin(arr, X, Y);
			}
			break;
		default:
			printf("\n输入错误，请重新输入\n");
			while (getchar() != '\n');
			break;

		}
		if (arr[2][7] == '*')
		{
			printf("\n游戏胜利！\n");
		}
	}
}