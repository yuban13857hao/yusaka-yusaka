#include<stdio.h>
struct XUE//学生类型XUE
{
	//结构体的成员
	char b[20];//姓名b
	int c;//年龄c
	char d[10];//性别d
	char e[12];//电话号码e

};
void print(struct XUE* p)
{

	printf("%s %d %s %s\n", (*p).b, (*p).c, (*p).d, (*p).e);
	//->
	//结构体指针变量->成员名
	printf("%s %d %s %s\n", p->b, p->c, p->d, p->e);

}
int main()
{
	struct XUE s = { "zhangxiangyong",19,"nan","13886620959" };

	//结构体对象.成员名
	printf("%s %d %s %s\n", s.b, s.c, s.d, s.e);

	print(&s);

	return 0;
}