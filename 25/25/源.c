#include<stdio.h>
int main()
{
	int a = 0;
	scanf_s("%d", &a);
	switch (a)
	{
	case 1:
	case 2:
	case 3:
	case 4:
	case 5:
		printf("������\n");
		break;
	case 6:
	case 7:
		printf("˫����\n");
		break;
	default:
		printf("�������\n");
		break;
	}
	return 0;
}