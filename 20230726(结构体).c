#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
struct person
{
	char name[10];//�˴�һ��Ҫ�趨�����С�磺10����Ȼ����char�����͹�С����������ڴ�װ������������ݶ�����{0x7BC3170C (ucrtbased.dll)��(λ�� 20230726(begining).exe ��)�������쳣: 0xC0000005: ��ȡλ�� 0x00000030 ʱ�������ʳ�ͻ}��
	int age;//int����������ʮλ�������˾ͻ��������������//
};
int main()
{
	struct person b1 = { "wonder",1234567891 };
	printf("%d\n", b1.age);
	return 0;
}







