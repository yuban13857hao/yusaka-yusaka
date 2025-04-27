#include<stdio.h>
int main()
{
	int a =0 ;
	int* pa = &a;
	int** ppa = &pa;
	*pa = 10;
	**ppa = 100;
	printf("%d", a);
	return 0;
}