#include<stdio.h>
void A(int* a)
{
	(*a)++;//�ǵô�����
}
int main()
{
	int a = 0;
	A(&a);
	printf("%d\n", a);
	A(&a);
	printf("%d\n", a);
	A(&a);
	printf("%d\n", a);
	A(&a);
	printf("%d\n", a);
	A(&a);
	printf("%d\n", a);
	return 0;
}