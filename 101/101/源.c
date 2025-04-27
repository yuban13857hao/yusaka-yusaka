#include<stdio.h>
int* A()
{
	int a = 10;
	return &a;
}
int main()
{
	//Ò°Ö¸Õë
	/*int arr[10] = { 0 };
	int* p = arr;
	for (int i = 0;i <= 10;i++)
	{
		*p = i;
		p++;
	}*/

	int* p = A();
	return 0;

}