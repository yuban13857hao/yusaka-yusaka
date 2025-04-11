#include<stdio.h>
void B()
{
	printf("hello worid\n");
}
void A()
{
	int i = 0;
	for (i = 0;i < 3;i++)
	{
		B();
	}
}
int main()
{
	A();
	return 0;
}