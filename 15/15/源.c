#include<stdio.h>
int main()
{
	int a = 10;//向内存申请4个字节。储存10
	//&a;取地址操作符
	//printf("%p\n",&a);
	int* p = &a;
	//p就是指针变量（*说明p是指针变量，int说明p指向的对象是int类型的）
	*p = 20;//解引用操作符，意思就是通过p中存放的地址，找到p所指向的对象，*p就是p指向的对象，或者可以粗略的理解为*p==a
	printf("%d\n", *p);
	return 0;
}