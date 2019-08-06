/*
    输入数组元素的值并显示
*/

#include <stdio.h>

int mian(void)

{
	int i;
	int a[5];

	for (i = 0; i < 5; i++) {
		printf("a[%d]: ", i);
		scanf("%d", &a[i]);
	}

	for (i = 0; i < 5; i++)
		printf("a[%d] = %d\n", i, a[i]);

	return 0;

}