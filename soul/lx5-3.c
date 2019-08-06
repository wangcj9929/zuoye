/*
从头开始依次使用5、4、3、2、1进行初始化。
*/

#include <stdio.h>

int main(void)

{
	int i;
	int a[5] = {5, 4, 3, 2, 1};

	for (i = 0; i < 5; i++)
		printf("a[%d] = %d\n ", i, a[i]);

	return 0;
}