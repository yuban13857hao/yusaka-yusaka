#include"game.h"
void jiemian()
{
	printf("1.开始游戏\n");
	printf("0.关闭游戏\n");

}
void game()
{
	//创建地图，地图为8*8的二维数组，为了防止意外，创建10*10的数组，实际打印8*8的部分
	char arr[XS][YS] = { 0 };

	//初始化地图
	cushihua(arr, XS, YS, '0'); 
	
	//玩家1，箱子*，终点_,
	//玩家 = '1';
	//箱子 = '*';
	//终点 = '_';

	//放到合适的位置（见笔记本）
	int x1 = 7;
	int y1 = 2;
	arr[x1][y1] = '1';

	arr[2][7] = '_';
	
	int x2 = 6;
	int y2 = 4;
	arr[x2][y2] = '*';

	//教程
	printf("\n教程:\n1是你\n*是箱子\n_是终点\n使用8246(小键盘）移动\n将箱子推到终点去吧！\n\n");

	//用于移动
	int w = '0';

	//移动与推箱子与胜利条件
	yundong(arr, X, Y, w,x1,y1,x2,y2);

	//打印（方便观察）（之后要更换位置）
	//dayin(arr, X, Y);




}
int main()
{
	//推箱子
	//目前只是个框架，没有障碍物，也没有地图边界之类的,而且x2y2多余了。。。
	//算了，懒得优化了，就这样吧
	//2025.4.22.21：42

	int a = 0;
	do
	{
		jiemian();

		printf("请输入数字:>");
		//输入字符会导致输入缓冲区的\n被无限读取，可以改进
		scanf_s("%d", &a);
		while (getchar() != '\n');
		switch (a)
		{
		case 1:
			printf("进入游戏\n");
			game();
			printf("\n再来一局？\n");
			break;

		case 0:
			printf("退出游戏\n");
			break;

		default:
			printf("\n输入错误，请重新输入\n\n");
			while (getchar() != '\n');
			break;
		}

	} while (a);

	return 0;
}