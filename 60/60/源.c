#include <stdio.h>
#include"����.h"

int main() 
{
    double d = 0.0;
    double e = 0.0;

    printf("�������������֣�");

    if (scanf_s("%lf%lf", &d, &e) != 2) 
    {
        printf("������Ч����ȷ�������������֡�\n");
        while (getchar() != '\n');
        return 1;
    }

    CUFA(d, e);

    return 0;
}