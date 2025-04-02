#include<stdio.h>

int main()
{
	int input = 0;
	printf("你好\n");
	printf("要玩ys吗（1/0/2)？");
	scanf_s("%d", &input);
	if (input == 1)
	{
		printf("玩ys玩的\n");
	}
	if (input == 2)
	{
		printf("这辈子有了\n");
	}
	else
	{
		printf("不玩ys导致的\n");
	}
	return 0;
}