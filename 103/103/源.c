#include<stdio.h>
////不建议
//struct ren
//{
//	char xinmin[20];
//	char xinbie[5];
//	char dianhua[12];
//	int shengao;
//}p1,p2;//p1和p2是全局变量

struct ren
{
	char xinmin[20];
	char xinbie[5];
	char dianhua[12];
	int shengao;
};
struct A
{
	struct ren p;
	int num;
	float f;
};
void B1(struct ren* p)
{
	printf("%s %s %s %d\n", p->xinmin, p->xinbie, p->dianhua, p ->shengao);
}
void B(struct ren p)
{
	printf("%s %s %s %d\n", p.xinmin, p.xinbie, p.dianhua, p .shengao);
}
int main()
{
	struct ren p1 = {"zzz","nan","26969166",185};//结构体变量的创建
	struct A GH = { {"a","nan","16413",155},100,3.14f };
	printf("%s %s %s %d\n", p1.xinmin, p1.xinbie, p1.dianhua, p1.shengao);
	printf("%s %s %s %d %d %f\n", GH.p.xinmin,GH.p.xinbie,GH.p.dianhua,GH.p.shengao,GH.num,GH.f);
	B(p1);
	B1(&p1);
	return 0;
}