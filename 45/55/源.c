#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>  // 添加Sleep函数支持

// 菜单函数
//
void menu()
{
    system("cls");  // 清屏优化界面
    printf("*************** 猜不对就关机 ***************\n");
    printf("***************    1.play    ***************\n");
    printf("***************    0.exit    ***************\n");
    printf("提示：60秒内猜对1-100的数字可取消关机\n");
}

// 游戏逻辑函数
void game()
{
    int guess = 0;
    int ret = rand() % 100 + 1;
    time_t start = time(NULL);  // 记录开始时间

    while (1)
    {
        time_t now = time(NULL);
        int remain = 60 - (int)difftime(now, start);

        if (remain <= 0) {
            printf("\n时间到！电脑即将关机...\n");
            return;  // 直接返回不取消关机
        }

        printf("\n剩余时间：%d秒 | 输入数字: ", remain);

        if (scanf_s("%d", &guess) != 1) {
            while (getchar() != '\n');
            printf("无效输入！");
            continue;
        }

        if (guess < ret) {
            printf("猜小了！");
        }
        else if (guess > ret) {
            printf("猜大了！");
        }
        else {
            printf("\n恭喜！正确答案是%d，关机已取消！\n", ret);
            system("shutdown -a");
            return;
        }
    }
}

int main()
{
    srand((unsigned int)time(NULL));
    system("shutdown -s -t 60");  // 只设置一次关机

    int input = 0;
    do {
        menu();
        printf("请选择: ");

        if (scanf_s("%d", &input) != 1) {
            while (getchar() != '\n');
            printf("请输入数字！\n");
            Sleep(2000);  // 等待2秒
            continue;
        }

        switch (input) {
        case 1:
            game();
            break;
        case 0:
            system("shutdown -a");
            printf("已取消关机，程序退出\n");
            return 0;  // 直接退出程序
        default:
            printf("无效选择！");
            Sleep(2000);
            break;

        }
    } while (1);  // 改为无限循环，通过return退出

    return 0;
}