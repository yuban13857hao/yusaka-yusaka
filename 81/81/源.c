#include<stdio.h>
//交换两个数组中的内容（两个数组一样大）
void JIAOHUAN(int *a1, int *a2,int sz)
{
	for (int i = 0;i < sz;i++)
	{
		int a = a1[i];
		a1[i] = a2[i];
		a2[i] = a;
	}

}
int main()
{
	int a1[] = { 1,3,5,7,9 };
	int a2[] = { 2,4,6,8,10 };

	int sz = sizeof(a1) / sizeof(a1[0]);

	JIAOHUAN(a1, a2, sz);

	for (int i = 0; i < sz; i++) 
	{
		printf("a1[%d]=%d, a2[%d]=%d\n", i, a1[i], i, a2[i]);
	}

	return 0;
}