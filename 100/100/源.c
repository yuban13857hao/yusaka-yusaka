#include<stdio.h>
int main()
{
	/*char* pc = NULL;
	int* pd = NULL;
	short* pa = NULL;
	double* pb = NULL;

	printf("%zu\n", sizeof(pc));
	printf("%zu\n", sizeof(pb));
	printf("%zu\n", sizeof(pd));
	printf("%zu\n", sizeof(pa));

	int a = 0x11223344;
	char* i = (char*)&a;*/
	//int* j = &a;
	//*i = 0;
	//*j = 0;
	//指针变量的类型决定了访问地址时访问的地址数

	int a = 1;
	int* pa = &a;
	char* pb = &a;
	printf("%p\n", pa);
	printf("%p\n", pa+1);

	printf("%p\n", pb);
	printf("%p\n", pb+1);
	//指针类型决定了指针+1和-1的时候跳过了几个字节
	
	return 0;
}