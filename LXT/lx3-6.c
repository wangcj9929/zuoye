/*
    显示计算出输入的三个整数中的最小值
*/

#include <stdio.h>
int main(void)
{
	int n1, n2, n3, min;

	puts("请输入三个整数:");
	printf("整数1:"); scanf("%d", &n1);
	printf("整数2:"); scanf("%d", &n2);
	printf("整数3:"); scanf("%d", &n3);

	if (n1 > n2) {
		min = n2;
	}
	else
		min = n1;
	if (n3 < min) {
		min = n3;
	}
	printf("较小的数是%d。\n", min);
	return 0;



}
