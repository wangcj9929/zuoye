/*
读取两个整数的值，然后计算出它们之间所有整数的和。
*/

#include <stdio.h>
int main(void)

{
	int sum = 0;
	int Q, W;
	puts("请输入两个整数：");
	printf("整数1:"); scanf("%d", &Q);
	printf("整数2:"); scanf("%d", &W);


	if (Q < W) {
		do {
			sum = sum + Q++;
		} while (Q <= W);
		printf("它们之间所有整数的和为：%d。\n", sum);
	}
	else {
		do {
			sum = sum + W++;
		} while (W <= Q);
		printf("它们之间所有整数的和为：%d。\n", sum);
	}
	putchar('\n');
	return 0;

}
