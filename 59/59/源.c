#include<stdio.h>
#include"�ӷ�.h"
#include"����.h"
#include"�˷�.h"
#include"����.h"
int main()
{
	//��ʼ����
	JIEMIAN();
	int a = 0;
	scanf_s("%d", &a);
	int b = 0;
	int c = 0;
	double d = 0.0;
	double e = 0.0;
	switch(a)
	{
	case 1://�ӷ�
	{
		printf("�������������֡�");
		scanf_s("%d%d", &b, &c);
		JIAFA(b,c);
		break;
	}

	case 2://����
	{
		printf("�������������֡�");
		scanf_s("%d%d", &b, &c);
		JIANFA(b, c);
		break;
	}

	case 3://�˷�
	{
		printf("�������������֡�");
		scanf_s("%d%d", &b, &c);
		CENGFA(b, c);
		break;
	}
	default:
		printf("�������");
		break;
	}

	return 0;
}