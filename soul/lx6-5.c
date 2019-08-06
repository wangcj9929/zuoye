/*
创建一个函数，返回1到n之间所有整数的和。
*/

#include <stdio.h>

int sumup(int n)
{
	int i;
	int sum = 0;

	for (i = 0; i <= n; i++)
		sum += i;

	return sum;
}

int main(void)
{
	int no;

	puts("请输入一个整数。");
	printf("整数为: "); scanf("%d", &no);

	printf("1到%d之间所有整数的和为: %d \n", no, sumup(no));

	return 0;
}