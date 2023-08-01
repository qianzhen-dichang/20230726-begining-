#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
int main()
{
	double a, b = 1, sum = 0;
	for (a = 1; a <= 10; a++)
	{
		b = a * b; /* 原理:1！等于1乘以1，2！等于1！乘以2，3！等于2！乘以3，以此类推 ，10！等于9！乘以10 */
		sum = sum + b; /* 依次将1到10的阶乘相加 */
	}
	printf("%lf\n", sum);
	return 0;
}


                                                  