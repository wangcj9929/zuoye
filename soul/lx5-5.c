// 对代码清单5-8中的程序进行修改，改为用对象式宏来定义元素个数。注意需要找到有关元素交换次数的规则。

/*
    对数组的全部元素进行倒序排列
*/

#include <stdio.h>

#define A 7

int main(void)

{
	int i;
	int x[A];

	for (i = 0; i < A; i++)
	{
		printf("x[%d]: \n", i);
		scanf("%d", &x[i]);
	}

	for (i = 0; i < 3; i++)
	{
		int temp = x[i];
		x[i] = x[6 - i];
		x[6 - i] = temp;
	}

	puts("倒序排列开始了。\n");

	for (i = 0; i < A ; i++)
		printf("x[%d] = %d \n", i, x[i]);

	return 0;
}