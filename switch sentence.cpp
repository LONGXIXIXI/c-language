#include<stdio.h>
int main()
/*{
	int day;
	scanf("%d",&day);        //switch�жϣ����α��ʽ���е���ֵ,ת��case
	switch(day)
	{
		case 1:              //case ������ڣ�������������γ������ʽ  
		printf("����һ\n");  //break������ֹ������ѭ��
		break;                
		case 2:
		printf("���ڶ�\n");
		break;
		case 3:
		printf("������\n");
		break;
		case 4:
			printf("������\n");
			break;
			case 5:
			printf("������\n");
			break;
			case 6:
			printf("������\n");
			break;
			case 7:
			printf("������\n");
			break;
	}
	return 0;
}*/
{
	int day;
	scanf("%d",&day);
	if(day>=1 && day<5)
	printf("������");
	else
	printf("��Ϣ��");
	return 0;
}
