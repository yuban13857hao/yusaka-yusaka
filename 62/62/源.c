#include<stdio.h>
int A(char* i)
{
	int o = 0;
	while (*i != '\0')
	{
		o++;
		i++;
	}
	return o;
}
int main()
{
	char a[] = "abc";
	int b = A(a);
	printf("%d\n", b);
	return 0;
}