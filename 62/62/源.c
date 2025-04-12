#include<stdio.h>
int A(char* i)
{
	//A("abc")
	//1+A("bc")
	//1+1+A("c")
	//1+1+1+A("\0")
	//1+1+1+0
	if (*i != '\0')
		return 1 + A(i + 1);
	else
		return 0;
}
int main()
{
	char a[] = "abc";
	int b = A(a);
	printf("%d\n", b);
	return 0;
}