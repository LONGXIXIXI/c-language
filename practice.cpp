#include<stdio.h>
int main()
{
	int n=1,m=2;
	switch(n)
	{
		case 1:n++;
		case 2:m++;
		case 3:
			switch(n)
			{
				case 1:n++;
				case 2:m++,n++;break;
			}
			case 4:m++;
			break;
			default:
			break;
	}
	printf("m=%d,n=%d\n",m,n);
	return 0;
}