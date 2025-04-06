#include<stdio.h>
int main()
{
	int a[] = { 1,2,3,4,5,6,7,8,9, };
	int b = 0;
	int c = 0;
	int d = sizeof(a) / sizeof(a[0]);//数组长度
	scanf_s("%d", &b);
	int left = 0;//左下标
	int right = d - 1;//右下标
	
	while (left <= right)
	{
		int mid = (left + right) / 2;//中间值
		if (a[mid] < b)
		{
			left = mid + 1;
		}
		else if (a[mid] > b)
		{
			right = mid - 1;
		}
		else
		{
			printf("找到了，下标是:%d\n", mid);
			break;
		}
	}
	if (left > right)
	{
		printf("找不到\n");
	}
	return 0;

}