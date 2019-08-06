/*
    线性查找
*/

#include <stdio.h>

#define NUMBER 5   //元素个数
#define FALLED -1  //查找失败

int search(const int v[], int key, int n)
{
	int i = 0;

	while (1)
	{
		if (i == n)
			return FALLED;  //查找失败
		if (v[i] == key)
			return i;  //查找成功
		i++;
	}
}

int main(void)
{
	int i, ky, idx;
	int vx[NUMBER];

	for (i = 0; i < NUMBER; i++)
	{
		printf("vx[%d] :", i);
		scanf("%d", &vx[i]);
	}

	printf("要查的值: ");
	scanf("%d", &ky);

	idx = search(vx, ky, NUMBER);

	if (idx == FALLED)
		puts("\a查找失败。");
	else
		printf("%d是数组的第%d号元素。\n", ky, idx + 1);

	return 0;
}