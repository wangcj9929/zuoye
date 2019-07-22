/*
    显示输入的整数值以下的约数
*/
#include <stdio.h>
int main(void)

{
	int no

	printf("请输入一个整数：");
	scanf("%d", &no);

	for (i = 1; i <= no; i++) {
		if (no % i == 0)
			printf("%d\n", i);
	}

	putchar('\n');
	return 0;
}