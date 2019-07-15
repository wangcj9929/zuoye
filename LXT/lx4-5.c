/*
    递增显示从0到输入的正整数为止的各个整数(•从1开始递增。/输入的值小于0的时候不换行。)
*/
#include <stdio.h>
int main(void)
{
	int no, i;
	printf("请输入一个正整数：");
	scanf("%d", &no);

	i = 1;
	while (i <= no) {
		printf("%d,", i++);
	}
	printf("\n");
	return 0;


}