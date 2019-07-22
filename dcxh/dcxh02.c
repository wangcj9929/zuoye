/*
    显示九九乘法表
*/
#include <stdio.h>

int main(void)
{
	int i , j;
	int seki = 0;

	for (i = 1; i <= 9; i++) {

		for (j = 1; j <= 9; j++) {
			seki = i * j;
			if (seki > 40)
				break;
			printf("%3d", seki);
		}

		putchar('\n');

	}

	return 0;
}
