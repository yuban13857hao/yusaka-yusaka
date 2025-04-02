#include <stdio.h>
int main()
{
    int a = 0;
    printf("出生了\n");  // 使用英文双引号
    while (a < 100)
    {
        printf("一年又一年：%d\n", a);
        a++;
    }
    if (a >= 100)
    {
        printf("老死了\n");
    }
    else
    {
        printf("42\n");
    }
    return 0;
}