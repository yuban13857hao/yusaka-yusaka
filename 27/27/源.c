#include<stdio.h>
int main()
{
//{
//    int c;
//    printf("�����ַ������س�������:");
//    while ((c = getchar()) != '\n' && c != EOF) {
//        putchar(c); // ��������ȡ���ַ�
//    }
    int ch = 0;
    while ((ch = getchar()) != EOF)
    {
        if (ch < '0' || ch>'9')
            continue;
        putchar(ch);
    }
    return 0;
}