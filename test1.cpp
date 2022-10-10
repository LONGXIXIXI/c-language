#include<stdio.h>
int main()
{
	int age;
	printf("请输入您的年龄:");
	scanf("%d",&age);
	if(age<18)
	printf("未成年\n");
	else if(age>=18 && age<28)
	printf("青年\n");
	else if(age>=28 && age<50) 
	printf("成年\n");
	else if(age>=50 && age<80)
	printf("老年\n");
	else
	printf("耄耋\n");
	return 0;
}