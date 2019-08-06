/*
显示直角在右下方的等腰直角三角形（函数版）
*/

#include <stdio.h>

/*---连续显示n个字符ch---*/
void put_chars(int ch, int n)
{
	while (n-- > 0)
		putchar(ch);
}

int mian(void)
{
	int i, len;
	printf("生成一个直角在右下角的等腰直角三角形。\n");
	printf("短边：");
	scanf("%d", &len);

	for (i = 1; i <= len; i++)
	{
		put_chars(' ', len - i); /*输入到8行int ch*/
		put_chars('*', i);
		putchar('\n');
	}

	return 0;
}