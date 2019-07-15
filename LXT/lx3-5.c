/*
确认相等运算符和关系运算符的运算结果是1和0。
*/

#include <stdio.h>
int main(void)

{
	int A, B;
	puts("请输入两个整数:");
	printf("整数1:"); scanf("%d", &A);
	printf("整数2:"); scanf("%d", &B);

	if (A == B)
		printf("相等运算符和关系运算符的运算结果是%d,%d。\n", 1, 0);

	return 0;

}