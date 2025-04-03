#include<stdio.h>
int two();
int one_three()
{
	printf("one\n");
	two();
	printf("three\n");
	return 0;
}
int two()
{
	printf("two\n");
	return 0;
}

int main()
{
	printf("stating now\n");
	one_three();
	printf("done!\n");

	return 0;
}
