#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
struct person
{
	char name[10];//此处一定要设定数组大小如：10，不然会因char短整型过小导致申请的内存装不下填入的数据而出现{0x7BC3170C (ucrtbased.dll)处(位于 20230726(begining).exe 中)引发的异常: 0xC0000005: 读取位置 0x00000030 时发生访问冲突}。
	int age;//int类型中最多放十位数，过了就会以其他进制理解//
};
int main()
{
	struct person b1 = { "wonder",1234567891 };
	printf("%d\n", b1.age);
	return 0;
}







