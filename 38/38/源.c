#include <stdio.h>

int main() 
{
    int a = 0;     
    int b = 1;
    int c = 0;
    int i = 0;

    for (i = 1; i <= 3; i++)
    {
        for (a = 1, b = 1;a <=i ;a++)
        {
            b = b * a;
        }
        c = c + b;
    }

    printf("%d", c);
    return 0;
}