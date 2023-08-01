#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
int main()
{
	int a = 0;
	int b = 0;
	int c = 1;
	int d = 0;
	for (a=3;a>1;a--)
	{
		for (b=a,c=1; b> 1; b--)
		{
			c = c * a;
		}
		d += c;
	}
	printf("%d\n", d);
	return 0;
}














//int jie(int a,long long b)
//{
//	a = 0;
//	b = 1;
//	scanf("%d", &a);
//	for (; a > 1; a--)
//	{
//		b= b * a;
//	}
//	return b;
//}
//
//int main()
//{
//	int e = 0;
//	long long d = 0;
//	long long c = 0;
//	scanf("%d", &c);
//	for (; c > 0; c--)
//	{
//		d +=jie( e, c);
//
//	}
//	printf("%d\n", d);
//	return 0;
//}
//
