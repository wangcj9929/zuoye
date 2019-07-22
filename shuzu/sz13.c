/*
    将数组的全部元素赋值为0.0并显示
*/
#include <stdio.h>

int main(void)

{
	int i;
	double v[7];

         // 给v[i]赋值
	for (i = 0; i < 7; i++)
		v[i] = 0.0;

	for (i = 0; i < 7; i++)
		printf("v[%d]: = %.1f\n", i, v[i]);

	return 0;
}