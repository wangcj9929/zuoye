/*
     编写一段程序，输入两个整数，
     如果两数值相等，则显示“A和B相等。”。
     如果A大于B,则显示“A大于B。”。
    如果A小于B,则显示“A小于B。”。
*/

#include <stdio.h>
int main(void)
{
	int a, b , c, max, min;

	puts("请输入三个整数：");
	printf("整数1:"); scanf("%d", &a);
	printf("整数2:"); scanf("%d", &b);
	printf("整数3:"); scanf("%d", &c);



	if (a > b) {
		max = a;
		min = b;
	}
	else {
		max = b;
		min = a;
	}


	if (max < c) {
		max = c;
	}
	if (min > c) {
		min = c;
	}


	printf("三个整数按大小依次的顺序是%d,%d,%d。\n", min, a + b + c - min - max, max);

	return 0;


}