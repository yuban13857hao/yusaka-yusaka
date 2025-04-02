#include <stdio.h>
int main()
{
	int x = 0;
	int y = 0;
	scanf_s("%d", &x);
	//ÊäÈë
	if (x > 0)
		y = -1;
	if (x < 0)
		y = 1;
	else
		y == 0;
	printf("%d", y);
	//Êä³ö
	return 0;
}
