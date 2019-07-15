/*
显示计算出输入的四个整数中的最大值
*/

#include <stdio.h>
int main(void)
{
	int q, w, e, r, max, A, B;

	puts("请输入四个整数;");
	printf("整数1:"); scanf("%d", &q);
	printf("整数2:"); scanf("%d", &w);
	printf("整数3:"); scanf("%d", &e);
	printf("整数4:"); scanf("%d", &r);

	A = (q > w) ? q : w;
	B = (e > r) ? e : r;
	max = (A > B) ? A : B;
	printf("最大值是%d。\n", max);
	return 0;



}