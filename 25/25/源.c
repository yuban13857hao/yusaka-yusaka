#include<stdio.h>
int main()
{
	int a = 0;
	scanf_s("%d", &a);
	switch (a)
	{
	case 1:
	case 2:
	case 3:
	case 4:
	case 5:
		printf("工作日\n");
		break;
	case 6:
	case 7:
		printf("双休日\n");
		break;
	default:
		printf("输入错误\n");
		break;
	}
	return 0;
}