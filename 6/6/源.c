#include <stdio.h>
int main()
{
	int x = 0;
	int y = 0;
	scanf_s("%d", &x);
	//����
	if (x > 0)
		y = -1;
	if (x < 0)
		y = 1;
	else
		y == 0;
	printf("%d", y);
	//���
	return 0;
}
