
#include <stdio.h>



    int main(void)
{
	int n1, n2;

	puts("请输入两个整数：");

	printf("整数A:"); scanf("%d", &n1);

    printf("整数B:"); scanf("%d", &n2);

    if (n1 % n2)
    	puts("B不是A的约数。");

	else
		puts("B是A的约数。");

	return 0;

}
