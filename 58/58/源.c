#include<stdio.h>
#include"1.h"

//��ʱ1.h��2.c��Ϊһ��ģ�飨�ӷ�ģ�飩

int main()
{
	int a = 0;
	int b = 0;
	scanf_s("%d %d", &a, &b);
	int c = A(a, b);
	printf("%d", c);
	return 0;
}
