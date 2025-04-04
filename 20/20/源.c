#include<stdio.h>
int main()
{
	float a = 0;//你的体重
	float b = 0;//相等重量的白金价值
	printf("想知道与你体重相等的白金的价值吗？\n");
	printf("以磅为单位，在下面输入你的体重\n");
	//输入
	scanf_s("%f", &a);
	//换算
	b = 1700.0 * a * 14.5833;
	//输出
	printf("与你体重相当的铂金价值为%.2f$\n", b);
	return 0;
}