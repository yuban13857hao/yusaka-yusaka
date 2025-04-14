#include<stdio.h>
int main()
{
	for (int i = 1;i < 10;i++)
	{
		
		for (int a =1 ; a <= i;a++)
		{
			int b = i * a;
			printf("%d*%d=%2d ", a, i, b);
		}
		printf("\n");
	}
	return 0;
}