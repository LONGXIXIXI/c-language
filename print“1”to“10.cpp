#include<stdio.h>
int main()
{
	int a=1;
	while(a<=10)
	{
		if(a==5)
		break;                //break代表停止后期的所有循环，直接终止循环
		//continue;           //continue代表终止本次循环，也就是本次循环中的continue后边的代码不在执行，而是直接跳转到while语句的判断部分，进行下一次循环的入口判断
		printf("%d ",a);
		a++;
		
	}
	return 0;
}