/*
创建一个函数，对元素个数为n的int函数数组v进行倒序排列。
*/

#include <stdio.h>

void rev_intary(int v[], int n)
{
	int i;
	int no = n / 2;

	for (i = 0; i < no; i++)
	{
		int tmp = v[i];
		v[i] = v[n - 1 - i];
		v[n - 1 - i] = tmp;
	}
}

void print_array(const int v[], int n)
{
	int i;

	printf("{ ");
	for (i = 0; i < n; i++)
		printf("%d ", v[i]);
	printf(" }");
}

int main(void)
{
	int ity[ ] = {1, 2, 3, 4, 5};

	printf("ity = "); print_array(ity, 5); putchar('\n');

	printf("倒序排列开始了----\n");

	rev_intary(ity, 5);

	printf("ity = "); print_array(ity, 5); putchar('\n');
	return 0;
}