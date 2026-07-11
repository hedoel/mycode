#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int add(int x, int y)
{
	return x + y;
}
int main()
{
	int x = 0; int y = 0; int c = 0;
	if (scanf("%d %d", &x, &y) != 2)
	{
		printf("输入失败");
	}
	c = add(x, y);
	printf("结果为%d", c);
	return 0;
}