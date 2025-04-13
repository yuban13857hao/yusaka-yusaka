//十个整数中的最大值
#include<stdio.h>
int main()
{
	int a[] = { 2,5,6,8,7,4,1,0,9,3 };
    int b = a[0];
	for (int i = 1;i < 10;i++)
	{

		if (a[i] > b)
		{
			b = a[i];
		}
	}
	printf("%d\n", b);

	return 0;
}