#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20 };
	int right = sizeof(arr) / sizeof(arr[0]) - 1;
	int left = 0;
	int seek = 0;
	int position = 0;
	printf("������һ����\n");
	scanf("%d", &seek);

	if (seek < arr[left] || seek > arr[right])
	{
		printf("�Ҳ�����");
		return 0;
	}
	while (left <= right)
	{
		int  mid = (left + right) / 2;
		if (arr[mid] < seek)
		{
			left = mid ;
		}
		else if (arr[mid] > seek)
		{
			right = mid ;
		}
		else if (arr[mid] == seek)
		{
			printf("�ҵ��ˣ�\n");
			position = mid + 1;
			printf("���ҵ������������еĵ�%dλ\n", position);
			break;

		}
		if (left > right)
			printf("�Ҳ�����");
		return 0;
	}
}











