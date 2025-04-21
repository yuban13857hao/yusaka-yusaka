#include "game.h"
//扫雷
void JIRMIAN()
{
	printf("    扫雷    \n");
	printf("1.开始游戏\n");
	printf("0.退出游戏\n");

}

void game()
{
	char zeng[XS][YS] = { 0 };//布置好的雷的信息
	char jia[XS][YS] = { 0 };//排查出的雷的信息
	//初始化数组的内容为指定的内容
	//zeng在没有布置雷的时候，都是'0'
	cushihua(zeng, XS, YS, '0');
	//jia在没有排查雷的时候，都是'*'
	cushihua(jia, XS, YS, '*');
	//设置雷
	lei(zeng, X, Y);
	//打印
	//dayin(zeng, X, Y);//不应该被打印，现在只是测试
	dayin(jia, X, Y);//打印
	//排查雷
	paica(zeng, jia, X, Y);



}

int main()
{
	int a = 0;
	//设置随机数的生成起点
	srand((unsigned int)time(NULL));

	do
	{
		JIRMIAN();
		printf("请选择:>");
		scanf_s("%d", &a);
		switch (a)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出\n");

			break;
		default:
			printf("输入错误\n");
			break;
		}
	} while (a);
	return 0;
}