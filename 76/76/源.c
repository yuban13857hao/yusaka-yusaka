#include<stdio.h>
//�õݹ�ķ�����ӡһ��������ÿһλ
void A(int x)
{
	int i = x % 10;
	int j = x / 10;
	if (x == 0)
	{
		return;
	}
	
	A(j);
	
	printf("%d", i);
}
int main()
{
	int a = 0;
	scanf_s("%d", &a);
	A(a);
	return 0;
}