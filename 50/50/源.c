//����������ж�����
#include<stdio.h>
//�ܱ�4�����������ܱ�100������
// �ܱ�400������
int A(int x)
{
	if ((x % 4 == 0 && x % 100 != 0) || x % 400 == 0)
	{
		return 1;
	}
	return 0;
		
}
int main()
{
	int a = 0;
	scanf_s("%d", &a);
	if (A(a))
	{
		printf("%d������", a);
	}
	else
	{
		printf("%d��������", a);
	}
	return 0;
}