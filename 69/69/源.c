#include<stdio.h>
//1-100�����������г��ֶ��ٸ����־�
int main()
{
	int a = 0;
	for (int i = 1;i <= 100;i++)
	{
		
		if (i % 10 == 9)
		{
			a += 1;
		}
		if (i / 10 == 9)
		{
			a += 1;
		}
	}
	printf("%d", a);
	return 0;
}