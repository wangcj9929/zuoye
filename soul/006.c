/*
    输入学生的分数并显示出分布情况
*/

#include <stdio.h>

#define A 80 /*人数上限*/

int main(void)

{
	int i, j;
	int num;               /*实际人数*/
	int tensu[A];          /*学生分数*/
	int bunpu[11] = {0};         /*分布图*/

	printf("请输入学生的人数： ");
	do
	{
		scanf("%d", &num);
		if (num < 1 || num > A)
			printf("请输入1-%d的人数！！！\n", A);
	} while (num < 1 || num > A);

	printf("请输入%d学生的成绩：\n", num);

	for (i = 0; i < num; i++)
	{
		printf("%2d 号：", i + 1);
		do
		{
			scanf("%d", &tensu[i]);
			if (tensu[i] < 0 || tensu[i] > 100)
				printf("请输入0-100的分数！\n");
		} while (tensu[i] < 0 || tensu[i] > 100);

		bunpu[tensu[i] / 10]++;
	}

	puts("\n -----分布图-----");
	printf(" 100 : ");
	for (j = 0; j < bunpu[10]; j++)
		putchar('*');
	putchar('\n');

	for (i = 9; i >= 0; i--)
	{
		printf("%2d-%2d: ", i * 10, i * 10 + 9);
		for (j = 0; j < bunpu[i]; j++)
			putchar('*');
		putchar('\n');
	}

	return 0;

}