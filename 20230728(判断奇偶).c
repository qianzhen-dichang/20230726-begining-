#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

int main()
{
	int a = 0;
	printf("������һ������\n");
	scanf("%d", &a);
	printf("a=%d\n", a);
	if (a % 2 == 1)
		printf("a������\n");
	else
		printf("a��ż��\n");
	return 0;
}