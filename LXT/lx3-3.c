/*
输入一个整数值，显示出它的绝对值
*/

#include <stdio.h>
int main(void)
{
	int no;
	printf("请输入一个整数：");
	scanf("%d", &no);

	if (no >= 0)
		printf("%d\n", no);
    else
		printf("%d\n", -no);

	return 0;
}