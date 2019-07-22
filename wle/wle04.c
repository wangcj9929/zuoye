/*
    输入规定个数整数并显示出它们的合计值和平均值
*/

#include <stdio.h>
int main(void)
{
	int i = 0;
	int sum = 0;
	int num, tmp;

	printf("请输入多少个整数：\n");
	scanf("%d", &num);

	while (i < num) {
		printf("NO.:%d", ++i);
		scanf("%d", &tmp);
		sum += tmp;
	}
	printf("合计值:%d\n", sum);
	printf("平均值:%2.f\n", (double)sum / num);
	return 0;
}