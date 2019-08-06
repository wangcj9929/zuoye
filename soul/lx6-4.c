/*
使用sqr函数创建另一个函数， 返回 int型整数的四次幂
*/

#include <stdio.h>

int pow4(int x)
{
	return x * x * x * x;
}

int main(void)
{
	int no;

	puts("计算一个整数的4次幂。");
	printf("输入一个整数: ");
	scanf("%d", &no);

	printf("该整数的四次幂的值为: %d\n", pow4(no));

	return 0;
}