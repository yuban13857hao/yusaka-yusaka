#include <stdio.h>
#include <string.h>  

#define PASSWORD_LENGTH 9  
int main()
{
    int i = 0;
    char a[PASSWORD_LENGTH] = { 0 };

    for (i = 0; i < 3; i++)
    {
        printf("���������루8λ���֣�: ");
        int scanResult = scanf_s("%8s", a, (unsigned)sizeof(a));

        if (strcmp(a, "88888888") == 0)
        {
            printf("��¼�ɹ�\n");
            return 0;
        }
        else
        {
            printf("�������ʣ�ೢ�Դ���: %d\n", 2 - i);
        }
    }

    printf("��¼ʧ��\n");
    return 0;
}