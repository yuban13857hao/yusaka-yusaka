#include<stdio.h>
int main()
{
	//printf("%c%c%c%c%c%c%c%c%c%c%c%c", 73, 32, 99, 97, 110, 32, 100, 111, 32, 105, 116, 33);
	//输入数据
	int year = 0;
	int month = 0;
	int date = 0;
	scanf_s("%4d%2d%2d", &year, &month, &date);


	//输出
	printf("year=%d\n", year);
	printf("month=%02d\n", month);
	printf("date=%02d\n", date);

	return 0;
}