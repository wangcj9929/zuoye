/*
    显示所输入的两个整数中较大的值
*/
#include <stdio.h>

int main(void)
{
	int a, b;
	puts("请输入两个整数：");
	printf("整数1："); scanf("%d", &a);
	printf("整数2："); scanf("%d", &b);

	if (a > b)
		printf("较大的数是%d。\n", a);
	else if (a < b)
		printf("较大的数是%d。\n", b);
	else
		printf("没有较大的数。\n");
	return 0;


}