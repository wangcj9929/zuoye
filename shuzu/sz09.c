/*
    输入5名学生的分数并显示出他们的总分和平均分（宏）
*/

#include <stdio.h>

#define NUMBER 8 /*学生人数*/

int main(void)

{
	int i;
	int tensu[NUMBER];
	int sum = 0;

	printf("请输入%d名学生的分数。\n", NUMBER);

	for (i = 0; i < NUMBER; i++)
	{
		printf("%-2d 号：", i + 1);
		scanf("%d", &tensu[i]);
		sum += tensu[i];
	}

	printf("总分：%5d\n", sum);
	printf("平均分：%5.1f\n", (double) sum / NUMBER);

	return 0;
}