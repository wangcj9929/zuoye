/*
    输入5名学生的分数并显示出其中的最高分和最低分
*/

#include <stdio.h>

#define A 5

int main(void)

{
	int i;
	int tensu[A];
	int max, min;

	printf("请输入%d位学生的成绩。\n", A);

	for (i = 0; i < A; i++)
	{
		printf("%2d号： \n", i + 1);
		scanf("%d", &tensu[i]);
	}
	max = min = tensu[0];

	for (i = 0; i < A; i++)
	{
		if (tensu[i] > max)
			max = tensu[i];
		if (tensu[i] < min)
			min = tensu[i];
	}

	printf("最大值在: %d\n", max);
	printf("最小值: %d\n", min);

	return 0;

}