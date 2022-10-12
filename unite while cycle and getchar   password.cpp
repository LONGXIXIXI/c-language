#include<stdio.h>
int main()
{
	int password[20],a,ch;
	printf("请输入密码:");
	scanf("%s",password);         //输入密码，并存放到password数组中
	                              //此时输入缓冲区还有剩余
	while((ch=getchar() !='\n'))  //用while循环读取剩余，直到读出‘\n’
	{
		;
	}
	printf("请确认（Y/N):");
	a=getchar();
	if(a == 'y')
	printf("确认成功");
	else
	printf("放弃确认");
	return 0;
}