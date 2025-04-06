//¼ÆËãnµÄ½×³Ë
#include<stdio.h>
int main()
{
	int n = 0;
	int i = 1;
	int a = 1;
	scanf_s("%d", &n);
	for (i = 1;i <= n;i++)
	{
		a = a * i;
	}
	printf("%d", a);

	return 0;
}