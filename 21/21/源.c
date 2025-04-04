#include<stdio.h>
int main()
{
	int a = 0;//年龄
	scanf_s("%d", &a);
	if (a < 18)
		printf("未成年\n");
	else if (a >= 18 && a < 30)
		printf("青年\n");
	else if (a >= 30 && a < 55)
		printf("壮年\n");
	else if (a >= 55 && a < 100)
		printf("老年\n");
	else
		printf("老神仙\n");
	return 0;

}