/*
       三种方法 显示1到100的的和
       */
#include <stdio.h>
int main(void)

{
	int sum = 0;
	int no = 1;

	do {
		sum = sum + no++;
		
	}
	while (no <= 100);

	printf("1到100的和：%d。\n", sum);


	putchar('\n');
	return 0;


}