// 显示出小于输入的整数的所有2的乘方。

#include <stdio.h>
int main(void)

{
	int no, q;

	printf("请输入一个整数：");
	scanf("%d", &no);

	q = 1;
	while (q <= no) {
		q *= 2;
		if (q <= no)
			printf("%d\n", q);
	}

	return 0;


}