#include"game.h"

void CAIDAN()//菜单
{
	printf("1:开始游戏\n");
	printf("0:关闭游戏\n");
}

void game()//游戏
{
	char qipan[X][Y] = { 0 };//棋盘

	cushihua(qipan, X, Y);//初始化棋盘

	dayin(qipan, X, Y);//打印棋盘

	//下棋
	while (1)
	{
		//玩家下棋
		playwanjai(qipan,X,Y);

		dayin(qipan, X, Y);

		//入机下棋
		playruji(qipan, X, Y);

		dayin(qipan, X, Y);

	}

}

int main()
{
	//设置随机数生成起点
	srand((unsigned)time(NULL));

	int l = 0;
	do
	{
		CAIDAN();
		printf("请选择:>");
		scanf_s("%d", &l);
		switch (l)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏");
			break;
		default:
			printf("选择错误");
			while (getchar() != '\n'); // 清理所有残留字符

			break;
		}
	} while (l);
	return 0;
}