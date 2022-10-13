#include<stdio.h>
int main()
{
	int a=1;
	do
	{
	printf("%d",a);         //do while循环中break和continue的意思和while中相似
	a++;
}
    while(a <= 10);
	return 0;