/*
    输出的整数是奇数吗
*/


#include <stdio.h>

int main(void)

{
	int no;

	printf("请输入一个整数：\n");
	scanf("%d", &no);

	if (no % 5)
		puts("该整数不能被5整除。");
	else
		puts("该整数能被5整除。");
	return 0;
	
}

