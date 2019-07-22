/*
    对数组的全部元素进行倒序排列
*/
#include <stdio.h>

int main(void)

{
	int i;
	int v[7];

	for (i = 0; i < 7; i++)
	{
		printf("v[%d]: ", i);
		scanf("%d", &v[i]);
	}

	for (i = 0; i < 3; i++)
	{
		int temp = v[i];
		v[i] = v[6 - i];
		v[6 - i] = temp;
	}
	puts("倒序排列了。");
	for (i = 0; i < 7; i++)
		printf("v[%d] = %d\n", i, v[i]);

	return 0;
}