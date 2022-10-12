#include<stdio.h>
int main()
{
	int a=0;
	for(a=1;a<=10;a++)       //for( 初始化 ； 判断  ； 调整)
	{
		printf("%d ",a);     //for循环中break和continue的作用和while是一样的，但实际用起来有差异
	}
	return 0;
}