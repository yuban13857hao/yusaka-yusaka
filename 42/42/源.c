#include<stdio.h>
#include <stdlib.h>  //(rand/srand)
#include <time.h>    //time

//菜单函数
void menu()
{
	printf("*******************************\n");
	printf("************  1.play  *********\n");//游戏开始
	printf("************  0.exit  *********\n");//退出游戏
	printf("*******************************\n");

}

//游戏内容函数
void game()
{
	int guess = 0;//储存猜测数字

	int ret = rand() % 100 + 1;//生成1-100的随机数

	while (1)//无限循环，直到猜对
	{
		//输入玩家猜测数字
		printf("猜猜数字:>");
		scanf_s("%d", &guess);

		//判断玩家猜测
		if (guess < ret)
		{
			printf("猜小了\n");
		}

		else if (guess > ret)
		{
			printf("猜大了\n");
		}

		else
		{
			printf("恭喜你，猜对了\n");
			break;//跳出循环
		}
	}
}

int main()
{
	int input = 0;//菜单选择
	srand((unsigned int)time(NULL));//用时间进行随机

	do
	{
		menu();//菜单

		printf("请选择:>");

		// 检查输入是否成功
		if (scanf_s("%d", &input) != 1)
		{
			// 输入失败时清除缓冲区
			while (getchar() != '\n');  // 清除非数字字符

			printf("输入错误，请输入数字！\n");

			continue;  // 跳过后续逻辑，重新循环

		}

		switch (input)
		{
		case 1://开始游戏
			game();
			break;

		case 0://退出
			printf("退出游戏\n");
			break;

		default://处理错误输入...和前面的好像有点重复了...
			printf("选择错误，重新选择！\n");
			break;
		}
	} while (input);//当input非0时继续循环

	return 0;
}