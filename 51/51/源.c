#include<stdio.h>
//дһ��������ʵ��һ��������������Ķ��ֲ���
int HANSU(int arr[], int k, int s)
{
	int i = 0;//���±�
	int o = s - 1;//���±�
	while(i <= o)
	{
		int c = i + (o - i) / 2;//�м��±�
		if (arr[c] < k)
		{
			i = c + 1;
			//����м�ֵС��Ҫ���ҵ�ֵ�����±����Ϊ�м��±�+1
		}
		else if (arr[c] > k)
		{
			o = c - 1;
			//����м�ֵ����Ҫ���ҵ�ֵ�����±����Ϊ�м��±�-1
		}
		else
		{
			return c;//�����ҵ����±�
		}
	}
	return -1;//�Ҳ���
}
int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int k = 7;
	//�ҵ��ˣ������±꣬�Ҳ���������-1��
	int s = sizeof(arr) / sizeof(arr[0]); //����Ԫ������
	int a = HANSU(arr, k, s);//�±�
	if (a == -1)
	{
		printf("�Ҳ���\n");
	}
	else
	{
		printf("�ҵ��ˣ��±���%d\n", a);
	}


	return 0;
}