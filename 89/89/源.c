#include<stdio.h>
int main()
{
	int a = 13;
	a |= (1 << 4);
	printf("%d\n", a);//a=29
	a &= (~(1 << 4));
	printf("%d\n", a);//a=13
	return 0;
}