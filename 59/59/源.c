#include<stdio.h>
#include"加法.h"
#include"减法.h"
#include"乘法.h"
#include"界面.h"
int main()
{
	//初始界面
	JIEMIAN();
	int a = 0;
	scanf_s("%d", &a);
	int b = 0;
	int c = 0;
	double d = 0.0;
	double e = 0.0;
	switch(a)
	{
	case 1://加法
	{
		printf("请输入两个数字》");
		scanf_s("%d%d", &b, &c);
		JIAFA(b,c);
		break;
	}

	case 2://减法
	{
		printf("请输入两个数字》");
		scanf_s("%d%d", &b, &c);
		JIANFA(b, c);
		break;
	}

	case 3://乘法
	{
		printf("请输入两个数字》");
		scanf_s("%d%d", &b, &c);
		CENGFA(b, c);
		break;
	}
	default:
		printf("输入错误");
		break;
	}

	return 0;
}