#include<stdio.h>
struct XUE//ѧ������XUE
{
	//�ṹ��ĳ�Ա
	char b[20];//����b
	int c;//����c
	char d[10];//�Ա�d
	char e[12];//�绰����e

};
void print(struct XUE* p)
{

	printf("%s %d %s %s\n", (*p).b, (*p).c, (*p).d, (*p).e);
	//->
	//�ṹ��ָ�����->��Ա��
	printf("%s %d %s %s\n", p->b, p->c, p->d, p->e);

}
int main()
{
	struct XUE s = { "zhangxiangyong",19,"nan","13886620959" };

	//�ṹ�����.��Ա��
	printf("%s %d %s %s\n", s.b, s.c, s.d, s.e);

	print(&s);

	return 0;
}