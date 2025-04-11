#include<stdio.h>
//写一个函数，实现一个整形有序数组的二分查找
int HANSU(int arr[], int k, int s)
{
	int i = 0;//左下标
	int o = s - 1;//右下标
	while(i <= o)
	{
		int c = i + (o - i) / 2;//中间下标
		if (arr[c] < k)
		{
			i = c + 1;
			//如果中间值小于要查找的值，左下标调整为中间下标+1
		}
		else if (arr[c] > k)
		{
			o = c - 1;
			//如果中间值大于要查找的值，右下标调整为中间下标-1
		}
		else
		{
			return c;//返回找到的下标
		}
	}
	return -1;//找不到
}
int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int k = 7;
	//找到了，返回下标，找不到，返回-1；
	int s = sizeof(arr) / sizeof(arr[0]); //数组元素总量
	int a = HANSU(arr, k, s);//下标
	if (a == -1)
	{
		printf("找不到\n");
	}
	else
	{
		printf("找到了，下标是%d\n", a);
	}


	return 0;
}