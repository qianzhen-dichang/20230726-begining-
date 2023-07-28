#define _CRT_SECURE_NO_WARNINGS
# include <stdio.h>
# include <string.h>
struct AGE
{
	int year;
	int month;
	int day;
};
struct STUDENT
{
	char name[20];  //姓名
	int num;  //学号
	struct AGE birthday;  //生日
	float score;  //分数
};
int main(void)
{
	struct STUDENT student1; /*用struct STUDENT结构体类型定义结构体变量student1*/
	struct STUDENT *p = NULL;  /*定义一个指向struct STUDENT结构体类型的指针变量p*/
	p = &student1;  /*p指向结构体变量student1的首地址, 即第一个成员的地址*/
	strcpy((*p).name, "小明");  //(*p).name等价于student1.name////此处关于字符串的赋予则不同于整形赋值，须调用strcpy函数//
	(*p).birthday.year = 1989;
	(*p).birthday.month = 3;
	(*p).birthday.day = 29;
	(*p).num = 1207041;
	(*p).score = 100;
	printf("name : %s\n", (*p).name);  //(*p).name不能写成p
	printf("birthday : %d-%d-%d\n", (*p).birthday.year, (*p).birthday.month, (*p).birthday.day);
	printf("num : %d\n", (*p).num);
	printf("score : %.1f\n", (*p).score);
	return 0;
}
