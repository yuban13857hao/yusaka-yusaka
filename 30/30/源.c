#include<stdio.h>
int main()
{
	int a = 0;//���أ����
	int b = 0;//���cm
	scanf_s("%d%d", &a, &b);//����
	double c = a / (b / 100.0) / (b / 100.0);//BMIֵ
	printf("%.2lf\n", c);//���

	return 0;
}