#include <stdio.h>



    int main(void)
{
	int n1, n2;

	puts("请输入两个整数：");

	printf("整数1:"); scanf("%d", &n1);

    printf("整数2:"); scanf("%d", &n2);

    if (n1 == n2)
    	puts("它们相等");

	else
		puts("它们不相等");

	return 0;
	/*
	相等运算符
	1.== 运算符：a == b
	当变量 n1 的值和 n2 的值相等时，就执行语句【1】,否则就执行语句【2】。
	如果a和b的值相等则为1,不等则为0(结果的类型是int)

	2.!= 运算符：a != b	
	当变量 n1 的值和 n2 的值不相等时，就执行语句【1】,否则就执行语句【2】。
	如果a和b的值不相等则为1,相等则为0(结果的类型是int)
	*/




}