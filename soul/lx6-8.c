/*
 创建一个函数，返回元素个数为n的int型数组v中的最小值
*/

#include <stdio.h>

int min_of(const int v[], int n)
{
	int i;
	int min = v[0];

	for (i = 0; i < n; i++)
		if (v[i] < min)
			min = v[i];
	return min;
}

int main(void)
{
	int x[ ] = {1, 2, 3, 4, 5};

	printf("最小值是： %d\n", min_of(x, 5));

	return 0;
}