#include <stdio.h>
#include <ctype.h> 
int main()
{
    char input = 0;
    while (1)
    {
        printf("请输入一个字母（输入Q退出）: ");
        int ret = scanf_s(" %c", &input, 1);  
        if (ret != 1 || toupper(input) == 'Q') 
        {
            if (ret == 1) printf("程序退出\n");
            else printf("输入错误，请重新输入\n");
            while (getchar() != '\n');
            break;
        }
        if (islower(input)) 
        {
            printf("大写: %c\n\n", toupper(input));
        }
        else if (isupper(input)) 
        {
            printf("小写: %c\n\n", tolower(input));
        }
        else 
        {
            printf("错误：请输入字母字符！\n\n");
        }
        while (getchar() != '\n');
    }
    return 0;
}