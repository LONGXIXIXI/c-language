#include<stdio.h>
int main()
{
	int day;
	scanf("%d",&day);        //switch判断（整形表达式）中的数值,转到case
	switch(day)
	{
		case 1:              //case 决定入口，后面必须是整形常量表达式  
		printf("星期一\n");  //break代表终止，跳出循环
		break;                
		case 2:
		printf("星期二\n");
		break;
		case 3:
		printf("星期三\n");
		break;
		case 4:
			printf("星期四\n");
			break;
			case 5:
			printf("星期五\n");
			break;
			case 6:
			printf("星期六\n");
			break;
			case 7:
			printf("星期天\n");
			break;
	}
	return 0;
