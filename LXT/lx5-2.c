/*
    依次把5、4、3、2、1赋值给数组的每个元素并显示(for)
*/
#include <stdio.h>

int main(void)
{
	int i;
	int v[5];

	for (i = 5; i > 0; i--)
		v[i] = i ;

	for (i = 0; i < 5; i++)
		printf("v[%d] = %d\n", i, v[i]);

	return 0;
}