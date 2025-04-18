//用递归的方式实现字符串逆序
#include<stdio.h>
void NIXU(char* a,int x,int y)
{
	if (x >= y)
	{
		return;
	}
	NIXU(a, x+1, y-1);
	char i = a[x];
	a[x] = a[y];
	a[y] = i;
	

}
int main()
{
	char arr[]="ABCDEF";
	int sz = sizeof(arr) / sizeof(arr[0]);
	int left = 0;
	int right = sz - 2;
	NIXU(arr,left,right);
	printf("%s", arr);
	return 0;
}