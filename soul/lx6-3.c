/*
创建一个函数，返回int型整数的立方
*/

#include <stdio.h>

int cude(int x)
{
	return x * x * x;
}

int main(void)
{
	int n1;

	puts("请输入一个整数。");
	printf("整数为: "); scanf("%d", &n1);

	printf("该整数的立方值为： %d\n", cude(n1));

	return 0;
}