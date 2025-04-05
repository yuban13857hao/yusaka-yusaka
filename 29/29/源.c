#include<stdio.h>
int main()
{
	int a[4] = { 0 };
	int i = 0;
	while (i < 4)
	{
		scanf_s("%d", &a[i]);
		i++;
	}
	int max = a[0];
	i = 1;
	while (i < 4)
	{
		if (a[i] > max)
		{
			max = a[i];
		}
		i++;
	}
	printf("%d\n", max);
	return 0;
}