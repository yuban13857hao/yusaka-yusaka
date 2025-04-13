#include<stdio.h>
int i = 0;

//要移动n层，必须先移动n - 1层；要移动n-1层，必须先移动n-2层……直到n = 1时可以直接移动

void H(int n, char A, char C, char B)
{
	
	i++;
	//当n为1时，直接从起点移动到目标
	if (n == 1)
	{
		printf("将盘1从%c移动到%c\n", A, C);
		return;
	}

	

	//当n大于1时，将其余n-1个1盘移动到辅助柱
	H(n - 1, A, B, C);

	//将第n个盘移动到目标，此时n-1个盘在辅助柱
	printf("将盘%d从%c移动到%c\n", n, A, C);

	//将n-1个盘从辅助柱移动到目标
	H(n - 1,B, C, A);

}
int main()
{
	int n = 0;
	
	scanf_s("%d", &n);

	H(n, 'A', 'C', 'B');//起点为A，目标为C，B为辅助

	printf("移动了%d次", i);
	
	return 0;
}