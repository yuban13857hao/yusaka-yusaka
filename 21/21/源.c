#include<stdio.h>
int main()
{
	int a = 0;//����
	scanf_s("%d", &a);
	if (a < 18)
		printf("δ����\n");
	else if (a >= 18 && a < 30)
		printf("����\n");
	else if (a >= 30 && a < 55)
		printf("׳��\n");
	else if (a >= 55 && a < 100)
		printf("����\n");
	else
		printf("������\n");
	return 0;

}