#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
int main()
{
	int a = 0;
	while (a <= 100)
		if (a % 2 == 1)
		{
			printf("%d\n", a);
			a++;
		}
		else
			a++;
	return 0;

}