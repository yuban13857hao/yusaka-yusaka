//序列中删除指定数字
#include<stdio.h>
int main()
{
	int a = 0;
	int b = 0;
	int arr[50] = { 0 };
	scanf_s("%d", &a);
	for (int i = 0;i < a;i++)
	{
		scanf_s("%d", &b);
		arr[i] = b;
	}
	int c = 0;
	scanf_s("%d", &c);
	arr[c - 1] = 0;
	for (int i = 0;i < a;i++)
	{
		if (i == c-1)
		{
			continue;
		}
		printf("%d ", arr[i]);
	}
	return 0;
}