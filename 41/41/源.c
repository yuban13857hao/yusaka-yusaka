#include <stdio.h>
#include <string.h>  

#define PASSWORD_LENGTH 9  
int main()
{
    int i = 0;
    char a[PASSWORD_LENGTH] = { 0 };

    for (i = 0; i < 3; i++)
    {
        printf("ÇëÊäÈëÃÜÂë£¨8Î»Êý×Ö£©: ");
        int scanResult = scanf_s("%8s", a, (unsigned)sizeof(a));

        if (strcmp(a, "88888888") == 0)
        {
            printf("µÇÂ¼³É¹¦\n");
            return 0;
        }
        else
        {
            printf("ÃÜÂë´íÎó£¬Ê£Óà³¢ÊÔ´ÎÊý: %d\n", 2 - i);
        }
    }

    printf("µÇÂ¼Ê§°Ü\n");
    return 0;
}