#include<stdio.h>
#include <stdlib.h>  //(rand/srand)
#include <time.h>    //time

//�˵�����
void menu()
{
	printf("*******************************\n");
	printf("************  1.play  *********\n");//��Ϸ��ʼ
	printf("************  0.exit  *********\n");//�˳���Ϸ
	printf("*******************************\n");

}

//��Ϸ���ݺ���
void game()
{
	int guess = 0;//����²�����

	int ret = rand() % 100 + 1;//����1-100�������

	while (1)//����ѭ����ֱ���¶�
	{
		//������Ҳ²�����
		printf("�²�����:>");
		scanf_s("%d", &guess);

		//�ж���Ҳ²�
		if (guess < ret)
		{
			printf("��С��\n");
		}

		else if (guess > ret)
		{
			printf("�´���\n");
		}

		else
		{
			printf("��ϲ�㣬�¶���\n");
			break;//����ѭ��
		}
	}
}

int main()
{
	int input = 0;//�˵�ѡ��
	srand((unsigned int)time(NULL));//��ʱ��������

	do
	{
		menu();//�˵�

		printf("��ѡ��:>");

		// ��������Ƿ�ɹ�
		if (scanf_s("%d", &input) != 1)
		{
			// ����ʧ��ʱ���������
			while (getchar() != '\n');  // ����������ַ�

			printf("����������������֣�\n");

			continue;  // ���������߼�������ѭ��

		}

		switch (input)
		{
		case 1://��ʼ��Ϸ
			game();
			break;

		case 0://�˳�
			printf("�˳���Ϸ\n");
			break;

		default://�����������...��ǰ��ĺ����е��ظ���...
			printf("ѡ���������ѡ��\n");
			break;
		}
	} while (input);//��input��0ʱ����ѭ��

	return 0;
}