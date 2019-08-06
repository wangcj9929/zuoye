/*
通过指针间接的操作身高
*/

#include <stdio.h>

int main(void)
{
	int A = 178; //A的身高
	int B = 175;
	int C = 173;

	int *isako, *hiroko;

	isako = &A;  //isako指向A（喜欢A）
	hiroko = &C; //hiroko指向C（喜欢C）

	printf("妹妹喜欢的人的身高: %d\n", *isako);
	printf("弟弟喜欢的人的身高: %d\n", *hiroko);

	isako = &B;  //isako指向B (移情别恋)

	*hiroko = 180; //将hiroko指向的对象赋为180
	               //修改弟弟喜欢的人的身高
	putchar('\n');
	printf("A的身高: %d\n", A);
	printf("B的身高: %d\n", B);
	printf("C的身高: %d\n", C);
	printf("妹妹喜欢的人的身高: %d\n", *isako);
	printf("弟弟喜欢的人的身高: %d\n", *hiroko);

	return 0;
}