/*
创建一个函数，返回两个int型整数中较小一数的值
*/

#include <stdio.h>

int min2(int a, int b)
{
	if (a > b)
		return b;
	else
		return a;
}

int main(void)

{
	int n1, n2;

	puts("请输入两个整数：");
	printf("整数1: "); scanf("%d", &n1);
	printf("整数2: "); scanf("%d", &n2);

	printf("较小的数的值是： %d\n", min2(n1, n2));

	return 0;
}