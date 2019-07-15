#include <stdio.h>
int main(int argc, char const *argv[])
{
	int A, B, C;

	puts("请输入两个整数:");
	printf("整数1:"); scanf("%d", &A);
	printf("整数2:"); scanf("%d", &B);

	C = (A > B) ? A - B : B - A;
	if (C <= 10)
		printf("它们的差小于等于10。\n");

	else
		printf("它们的差大于等于11。\n");
	return 0;
}