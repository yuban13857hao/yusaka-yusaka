#include <stdlib.h>  
#include <stdio.h>  
int main()
{
	int a = 0;
	system("shutdown -s -t 60");
b:
	printf("��ĵ��Խ���60s��ػ���������룺111����ȡ���ػ�\n");
	scanf_s("%d", &a);
	if (a == 111)
	{
		system("shutdown -a");
	}
	else
	{
		goto b;
	}
	return 0;
}