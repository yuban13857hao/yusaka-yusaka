#include<stdio.h>
int main()
{
	char a[] = "0123456789";
	char b[] = "##########";
	int left = 0;
	int right = strlen(b) - 1;
	while (left <= right)
	{
		b[left] = a[left];
		b[right] = a[right];
		printf("\a%s\n", b);
		Sleep(1500);//延时函数
		system("cls");//清空屏幕，system是一个库函数，可以执行系统命令
		left++;
		right--;
	}
	return 0;
}