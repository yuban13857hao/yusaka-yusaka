//��ӡ1234�����1 2 3 4 
//�����ĵݹ�
#include<stdio.h>
void A(int x)
{
	if (x > 9)
	{
		A(x / 10);
	}
	printf("%d ", x % 10);
}
int main()
{
	int a = 0;
	scanf_s("%d", &a);
	A(a);
	return 0;
}