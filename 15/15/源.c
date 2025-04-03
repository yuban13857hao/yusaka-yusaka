int main()
{
	int a = 10;//向内存申请4个字节。储存10
	//&a;取地址操作符
	//printf("%p\n",&a);
	int* p = &a;
	//p就是指针变量（*说明p是指针变量，int说明p指向的对象是int类型的）
	return 0;
}