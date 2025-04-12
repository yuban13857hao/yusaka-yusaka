#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>  // ���Sleep����֧��

// �˵�����
//
void menu()
{
    system("cls");  // �����Ż�����
    printf("*************** �²��Ծ͹ػ� ***************\n");
    printf("***************    1.play    ***************\n");
    printf("***************    0.exit    ***************\n");
    printf("��ʾ��60���ڲ¶�1-100�����ֿ�ȡ���ػ�\n");
}

// ��Ϸ�߼�����
void game()
{
    int guess = 0;
    int ret = rand() % 100 + 1;
    time_t start = time(NULL);  // ��¼��ʼʱ��

    while (1)
    {
        time_t now = time(NULL);
        int remain = 60 - (int)difftime(now, start);

        if (remain <= 0) {
            printf("\nʱ�䵽�����Լ����ػ�...\n");
            return;  // ֱ�ӷ��ز�ȡ���ػ�
        }

        printf("\nʣ��ʱ�䣺%d�� | ��������: ", remain);

        if (scanf_s("%d", &guess) != 1) {
            while (getchar() != '\n');
            printf("��Ч���룡");
            continue;
        }

        if (guess < ret) {
            printf("��С�ˣ�");
        }
        else if (guess > ret) {
            printf("�´��ˣ�");
        }
        else {
            printf("\n��ϲ����ȷ����%d���ػ���ȡ����\n", ret);
            system("shutdown -a");
            return;
        }
    }
}

int main()
{
    srand((unsigned int)time(NULL));
    system("shutdown -s -t 60");  // ֻ����һ�ιػ�

    int input = 0;
    do {
        menu();
        printf("��ѡ��: ");

        if (scanf_s("%d", &input) != 1) {
            while (getchar() != '\n');
            printf("���������֣�\n");
            Sleep(2000);  // �ȴ�2��
            continue;
        }

        switch (input) {
        case 1:
            game();
            break;
        case 0:
            system("shutdown -a");
            printf("��ȡ���ػ��������˳�\n");
            return 0;  // ֱ���˳�����
        default:
            printf("��Чѡ��");
            Sleep(2000);
            break;

        }
    } while (1);  // ��Ϊ����ѭ����ͨ��return�˳�

    return 0;
}