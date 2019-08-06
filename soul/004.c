/*
    输入5名学生的分数并显示出他们的总分和平均分（宏）
*/

#include <stdio.h>

#define A 5 /*学生人数*/

int main(void)

{
	int i;
	int tensu[A];
	int sum = 0;

	printf("请输入%d位学生的分数。\n", A);

	for (i = 0 ; i < A; i++)
	{
		printf("%2d号： ", i + 1);
		scanf("%d", &tensu[i]);
		sum += tensu[i];
	}

	printf("总分： %5d \n", sum);
	printf("平均分： %5.1f\n", (double)sum / A);

	return 0;
}