#include<stdio.h>
int main()
{
	char a[] = "0123456789";
	char b[] = "##########";
	int left = 0;
	int right = strlen(b) - 1;
	while (left <= right)
	{
		b[left] = a[left];
		b[right] = a[right];
		printf("\a%s\n", b);
		Sleep(1500);//��ʱ����
		system("cls");//�����Ļ��system��һ���⺯��������ִ��ϵͳ����
		left++;
		right--;
	}
	return 0;
}