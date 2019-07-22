/*
    输入5名学生的分数并显示出其中的最高分和最低分
*/
#include <stdio.h>

#define NM 5

int main(void)

{
	int i;
	int tensu[NM];
	int max, min;

	printf("请输入%d名学生的分数。\n", NM);
	for (i = 0; i < NM; i++)
	{
		printf("%-2d 号：", i + 1);
		scanf("%d", &tensu[i]);
	}

	min = max = tensu[0];

	for (i = 0; i < NM; i++)
	{
		if (tensu[i] > max) max = tensu[i];
		if (tensu[i] < min) min = tensu[i];
	}

	printf("最大值：%d\n", max);
	printf("最小值：%d\n", min);
	return 0;
}