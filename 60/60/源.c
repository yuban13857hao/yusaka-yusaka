#include <stdio.h>
#include"除法.h"

int main() 
{
    double d = 0.0;
    double e = 0.0;

    printf("请输入两个数字：");

    if (scanf_s("%lf%lf", &d, &e) != 2) 
    {
        printf("输入无效！请确保输入两个数字。\n");
        while (getchar() != '\n');
        return 1;
    }

    CUFA(d, e);

    return 0;
}