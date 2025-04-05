#include<stdio.h>
int main()
{
	int a = 0;//体重（公斤）
	int b = 0;//身高cm
	scanf_s("%d%d", &a, &b);//输入
	double c = a / (b / 100.0) / (b / 100.0);//BMI值
	printf("%.2lf\n", c);//输出

	return 0;
}