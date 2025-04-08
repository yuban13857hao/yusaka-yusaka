#include <stdlib.h>  
#include <stdio.h>  
int main()
{
	int a = 0;
	system("shutdown -s -t 60");
b:
	printf("你的电脑将在60s后关机，如果输入：111，就取消关机\n");
	scanf_s("%d", &a);
	if (a == 111)
	{
		system("shutdown -a");
	}
	else
	{
		goto b;
	}
	return 0;
}