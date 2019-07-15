#include <stdio.h>
int main(int argc, char const *argv[])
{
	int A, B, C;
	puts("请输入三个整数:");
	printf("整数1:"); scanf("%d", &A);
	printf("整数2:"); scanf("%d", &B);
	printf("整数3:"); scanf("%d", &C);

	if (A == B && B == C && C == A) {
		printf("三个值都相等。\n");
	}
	else if (A == B ||  A == C || C == B) {
		printf("有两个值相等。\n");
	}
	else {
		printf("三个值都不相等。\n");
	}

	return 0;
}