/*
    把数组中的全部元素复制到另一个数组中
*/

#include <stdio.h>

int main(void)

{
	int i;
	int a[5] = {1, 2, 3, 4};
	int b[5];

	for (i = 0; i < 5; i++)
		b[5] = a[5];

	puts("    a    b    ");
	puts("---------------")

	for (i = 0; i < 5; i++)
		printf("%4d%4d\n", a[i]; b[i]);
	return 0;

}