//最高分与最低分之差
#include<stdio.h>
int  main()
{
	int a = 0;
	int b = 0;
	scanf_s("%d", &a);
	int arr[10000] = { 0 };
	for (int i = 0;i < a;i++)
	{
		scanf_s("%d", &b);
		arr[i] = b;
	}
	int max = arr[0];
	int min = arr[0];
	for (int i = 0;i < a;i++)
	{
		if (arr[i] > max)
		{
			max = arr[i];
		}
		if (arr[i] < min)
		{
			min = arr[i];
		}
	}
	int c = max - min;
	printf("%d", c);
	return  0;
}