#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
struct person
{
	char name[10];
	int age;
};
int main()
{
	struct person person1;
	struct person *h = 0;
	h = &person1;
	(*h).age = 10;
	//(*h).name = "wonder";������ʽ��������strcpy����//
	strcpy((*h).name, "wonder");
	printf("age:%d\n", person1.age);
	printf("age:%d\n", (*h).age);
	printf("name��%s\n", person1.name);
	printf("name:%s\n", (*h).name);


	printf("%d\n", h->age);//���ֱ�﷽ʽҲ�ǿ��Ե�//



	return 0;
}

