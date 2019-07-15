/*
按照升序显示出小于输入值的所有正偶数。
*/

#include <stdio.h>
int main(void)

{
	int no, q;

	printf("请输入一个正整数：\n");
	scanf("%d", &no);
	q = 0;
	while (q < no) {
		q++;
		if (q / 2)
			printf("%d,", q++);
	}

	printf("\n");

	return 0;


}