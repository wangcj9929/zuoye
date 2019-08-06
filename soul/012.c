/*
要对x的值进行n次乘法运算，也可以通过使n的值按照5、4、···、1的方式递减来实现。
*/

#include <stdio.h>

double power(double x, int n)
{
	double tmp = 1.0;

	while (n-- > 0) /*也就是次数*/

		tmp *= x;
	return tmp;

}


int main(void)
{
	double a;
	int b;

	printf("求a的b次幂。\n");
	printf("实数a:"); scanf("%lf", &a);
	printf("整数b:"); scanf("%d", &b);

	printf("%.2f的%d次幂: %.2f。\n", a, b, power(a, b));

	return 0;
}

