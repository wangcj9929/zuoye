/*
    显示直角在左下方的等腰直角三角形
*/
#include <stdio.h>
int main(void)
{
	int i, j, len;

	puts("生成一个直角在左下角的等腰直角三角形。");
	printf("短边: "); scanf("%d", &len);

	for (i = 1 ; i <= len; i++) {
		for (j = 1; j <= i; j++)
			putchar('*');
		putchar('\n');
	}
	return 0;

}