#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include <stdio.h>
int main()
{
	int a[10] = { 1, 3, 5, 7, 9, 10, 19, 31, 56, 101 };
	int left, right, lookup, mid;
	scanf("%d", &lookup);

	left = 0;
	right = 9;
	if (lookup < a[left] || lookup > a[right])
	{
		printf("���޴���");
		return 0;
	}
	while (left <= right)
	{
		mid = (left + right) / 2;
		if (lookup == a[mid])
		{
			printf("������ĵ�%d����Ϊ��������\n", mid + 1);
			break;
		}
		else if (lookup > a[mid])
		{
			left = mid + 1;
		}
		else
		{
			right = mid;
		}

	}
	if (left > right)
	{
		printf("���޴���\n");
	}

	return 0;
}



