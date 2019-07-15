/*
    判断输入的整数的符号
*/

#include <stdio.h>

int main(void)

{
	int no;

	printf("请输入一个整数：");
	scanf("%d", &no);

	if (no == 0)
		puts("该整数为0");

	else if (no > 0)
		puts("该整数为正数");

	else
		puts("该整数为负数");

	return 0;

	/*
	关系运算符

< 运算符	a < b	a小于b时结果为1，反之为0（结果的类型为int）
> 运算符	a > b	a大于b时结果为1，反之为0（结果的类型为int）
<= 运算符	a <= b	a小于等于b时结果为1，反之为0（结果的类型为int）
>= 运算符	a >= b	a大于等于b时结果为1，反之为0（结果的类型为int）
    */

}