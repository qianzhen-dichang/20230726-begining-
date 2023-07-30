#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

int main()
{
	int a = 0;
	printf("请输入一个数字\n");
	scanf("%d", &a);
	printf("a=%d\n", a);
	if (a % 2 == 1)
		printf("a是奇数\n");
	else
		printf("a是偶数\n");
	return 0;
}