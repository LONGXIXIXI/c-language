#include<stdio.h>
int main()
{
	int ch;
	while((ch=getchar())!=EOF)       //getchar表示接收键盘输入的值
	{                                //EOF---->end of file,值为-1   
		putchar(ch);                 //putchar表示打印键盘输入的值
	}                                //ctrl+z 
	return 0;
}