#include<stdio.h>
int main()
{
	int age;
	printf("��������������:");
	scanf("%d",&age);
	if(age<18)
	printf("δ����\n");
	else if(age>=18 && age<28)
	printf("����\n");
	else if(age>=28 && age<50) 
	printf("����\n");
	else if(age>=50 && age<80)
	printf("����\n");
	else
	printf("���\n");
	return 0;
}