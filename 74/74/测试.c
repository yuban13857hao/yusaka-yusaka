#include"game.h"

void CAIDAN()//�˵�
{
	printf("1:��ʼ��Ϸ\n");
	printf("0:�ر���Ϸ\n");
}

void game()//��Ϸ
{
	int ret = 0;
	char qipan[X][Y] = { 0 };//����

	cushihua(qipan, X, Y);//��ʼ������

	dayin(qipan, X, Y);//��ӡ����


	
	//����
	while (1)
	{
		
		

		//�������
		playwanjai(qipan,X,Y);

		dayin(qipan, X, Y);

		//�ж���Ӯ
		ret = jiesu(qipan, X, Y);

		if (ret != 'C')
		{
			break;
		}
		//�������
		playruji(qipan, X, Y);

		//�ж���Ӯ
		ret = jiesu(qipan, X, Y);
		if (ret != 'C')
		{
			break;
		}
		dayin(qipan, X, Y);//��ӡ����

	}
	if (ret == '*')
	{
		printf("���ʤ��\n");
	}
	else if (ret == '#')
	{
		printf("���ʤ��\n");
	}
	else
	{
		printf("ƽ��\n");
	}
	dayin(qipan, X, Y);//��ӡ����

}

int main()
{
	//����������������
	srand((unsigned)time(NULL));

	int l = 0;
	do
	{
		CAIDAN();
		printf("��ѡ��:>");
		scanf_s("%d", &l);
		switch (l)
		{
		case 1:
			game();
			break;
		case 0:
			printf("�˳���Ϸ");
			break;
		default:
			printf("ѡ�����");
			while (getchar() != '\n'); // �������в����ַ�

			break;
		}
	} while (l);
	return 0;
}