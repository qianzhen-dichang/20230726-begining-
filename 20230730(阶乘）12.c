#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
int main()
{
	int a = 0;
	long long c = 1;
	scanf("%d", &a);
	for (;a > 1; a--)
	{
		c = c * a;
	}
	printf("%d\n", c);
	return 0;
}