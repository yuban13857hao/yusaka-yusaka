#include<stdio.h>
int main()
{
//{
//    int c;
//    printf("输入字符（按回车结束）:");
//    while ((c = getchar()) != '\n' && c != EOF) {
//        putchar(c); // 逐个输出读取的字符
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