#include <stdio.h>
int main()
{
    int a = 0;
    printf("������\n");  // ʹ��Ӣ��˫����
    while (a < 100)
    {
        printf("һ����һ�꣺%d\n", a);
        a++;
    }
    if (a >= 100)
    {
        printf("������\n");
    }
    else
    {
        printf("42\n");
    }
    return 0;
}