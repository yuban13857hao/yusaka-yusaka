#include <stdio.h>
// �õݹ�ķ������� x �Ľ׳�
//n!==n*n-1*n-2����*1;
int A(int x)
{
    if (x <= 1)
    {
        return 1;
    }
    return x * A(x - 1);
}

int main()
{
    int a = 0;
    if (scanf_s("%d", &a) != 1)
    {
        return 1;
    }
    printf("%d\n", A(a));
    return 0;
}
