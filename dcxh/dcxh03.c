/*
    画一个长方形
*/
#include <stdio.h>
int main(void)
{
	int i, j;
	int height, width;

	puts("让我们画一个长方形。");
	printf("高: "); scanf("%d", &height);
	printf("宽: "); scanf("%d", &width);

	for (i = 1; i <= height; i++) {
		for (j = 1; j <= width; j++)
			putchar('*');
		putchar('\n');
	}
	return 0;
}