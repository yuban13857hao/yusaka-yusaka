#include<stdio.h>
int main()
{
	int a[] = { 1,2,3,4,5,6,7,8,9, };
	int b = 0;
	int c = 0;
	int d = sizeof(a) / sizeof(a[0]);//���鳤��
	scanf_s("%d", &b);
	int left = 0;//���±�
	int right = d - 1;//���±�
	
	while (left <= right)
	{
		int mid = (left + right) / 2;//�м�ֵ
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
			printf("�ҵ��ˣ��±���:%d\n", mid);
			break;
		}
	}
	if (left > right)
	{
		printf("�Ҳ���\n");
	}
	return 0;

}