#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
int main()
{
	double a, b = 1, sum = 0;
	for (a = 1; a <= 10; a++)
	{
		b = a * b; /* ԭ��:1������1����1��2������1������2��3������2������3���Դ����� ��10������9������10 */
		sum = sum + b; /* ���ν�1��10�Ľ׳���� */
	}
	printf("%lf\n", sum);
	return 0;
}


                                                  