#include<stdio.h>
int main()
{
	int password[20],a,ch;
	printf("����������:");
	scanf("%s",password);         //�������룬����ŵ�password������
	                              //��ʱ���뻺��������ʣ��
	while((ch=getchar() !='\n'))  //��whileѭ����ȡʣ�ֱ࣬��������\n��
	{
		;
	}
	printf("��ȷ�ϣ�Y/N):");
	a=getchar();
	if(a == 'y')
	printf("ȷ�ϳɹ�");
	else
	printf("����ȷ��");
	return 0;
}